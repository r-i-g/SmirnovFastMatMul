#!/usr/bin/python

from generate_params import *
from generate_test import *
from generators_utils import lcm as lcmf
import math
import numpy as np

class TestCasesGenerator(object):
    """
    This class generates test suits for experimentation
    """
    SUB_PROBLEMS = [1, 2, 4, 5, 8, 10, 20]
    REC_LEVEL = range(2, 5)
    UPPER_PROCESSORS_BOUND = 400
    LOWER_PROCESSORS_BOUND = 10

    @staticmethod
    def _is_valid_setup(matrix_dim_limitation, mat1, mat2):
        row_limit, col_limit = matrix_dim_limitation
        validity = mat1[0] <= row_limit and mat2[0] <= row_limit and mat1[1] <= col_limit and mat2[1] <= col_limit
        return validity

    @staticmethod
    def _is_valid_proc(processor_number):
        return TestCasesGenerator.LOWER_PROCESSORS_BOUND <= processor_number <= TestCasesGenerator.UPPER_PROCESSORS_BOUND

    @staticmethod
    def generate_test_set(matrix_dim_limitation):
        row_limitation, col_limitation = matrix_dim_limitation
        sub_problems = TestCasesGenerator.SUB_PROBLEMS
        for rec_level in TestCasesGenerator.REC_LEVEL:
            for sub_problem in sub_problems:
                mat1, mat2, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level, sub_problem, False)
                if TestCasesGenerator._is_valid_setup(matrix_dim_limitation, mat1, mat2):
                    print "For " + str(processor_number) + " processes and " + str(sub_problem) +" amount of subproblems, got matrix sizes of " + str((mat1, mat2))
                    TestGenerator(mat1[0], mat1[1], mat2[0], mat2[1], sub_problem, processor_row_dim, processor_col_dim)

    @staticmethod
    def generate_normalized_test_set(matrix_dim_limitation):
        """
        Creates a test set with the same matrices being multiplied across the different test cases
        :param matrix_dim_limitaiton:
        :return:
        """
        row_limitation, col_limitation = matrix_dim_limitation
        sub_problems = TestCasesGenerator.SUB_PROBLEMS
        for rec_level in TestCasesGenerator.REC_LEVEL:
            print "For recursion level " + str(rec_level)
            dimensions_a = []
            dimensions_b = []
            dimensions_c = []
            for sub_problem in sub_problems:
                mat1, mat2, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level,
                                                                                                        sub_problem,
                                                                                                        False)
                dimensions_a += [mat1[0]]
                dimensions_b += [mat1[1]]
                dimensions_c += [mat2[1]]

                if TestCasesGenerator._is_valid_setup(matrix_dim_limitation, mat1, mat2):
                    print "For " + str(processor_number) + " processes and " + str(sub_problem) + " amount of subproblems, got matrix sizes of " + str((mat1, mat2))

            mat1 = [reduce(lcmf, dimensions_a), reduce(lcmf, dimensions_b)]
            mat2 = [reduce(lcmf, dimensions_b), reduce(lcmf, dimensions_c)]
            print "Got the following normalized matrix multiplication sizes " + str((mat1, mat2)) + "\n"


    @staticmethod
    def generate_smirnov_bench_params(matrix_dim_limitation, exclude=[]):
        """

        :return: The largest matrix size to accommodate all of the multiplications
        """

        # Get upto 64000 processes to check for the matrix multiplications
        sub_problems = TestCasesGenerator.SUB_PROBLEMS
        processes = {}
        dimensions_m = []
        dimensions_k = []
        dimensions_n = []

        for rec_level in range(2,5):
            for sub_problem in sub_problems:
                mat1, mat2, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level,
                                                                                                        sub_problem,
                                                                                                        False)


                if TestCasesGenerator._is_valid_setup(matrix_dim_limitation, mat1, mat2) and TestCasesGenerator._is_valid_proc(processor_number):

                    if processor_number in exclude:
                        continue

                    if processor_number not in processes:
                        dimensions_m += [mat1[0]]
                        dimensions_k += [mat1[1]]
                        dimensions_n += [mat2[1]]
                        processes[processor_number] = (mat1, mat2)

        #print "processes " + str(processes)

        #print str(dimensions_m)
        mat1 = [reduce(lcmf, dimensions_m), reduce(lcmf, dimensions_k)]
        mat2 = [reduce(lcmf, dimensions_k), reduce(lcmf, dimensions_n)]

        print "Got the following normalized matrix multiplication sizes " + str((mat1, mat2)) + "\n"
        return mat1,mat2

    @staticmethod
    def generate_bench_test(matrix_dim_limitation, mat_dimensions, exclude=[]):
        mat1 = mat_dimensions[0]
        mat2 = mat_dimensions[1]
        sub_problems = TestCasesGenerator.SUB_PROBLEMS

        for rec_level in range(2, 5):
            for sub_problem in sub_problems:
                _, _, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level,
                                                                                                        sub_problem,
                                                                                                        False)

                if processor_number in exclude:
                    continue

                if TestCasesGenerator._is_valid_setup(matrix_dim_limitation, mat1,
                                                      mat2) and TestCasesGenerator._is_valid_proc(processor_number):
                    t = TestGenerator(mat1[0], mat1[1], mat2[0], mat2[1], sub_problem, processor_row_dim, processor_col_dim, benchmark=True)
                    t.write_input_matrices()
                    t.generate_smirnov_bench()
                    t.generate_scalapack_bench()


    @staticmethod
    def generate_scalapack_bench_params(matrix_dims):
        """

        :return: The largest matrix size to accommodate all of the multiplications
        """

        # Get upto 64000 processes all are squares
        all_dims = matrix_dims[0]
        all_dims += matrix_dims[1]

        upper_bound = int(math.sqrt(TestCasesGenerator.UPPER_PROCESSORS_BOUND))

        def devides(n):
            return len(filter(lambda x: x%n == 0, all_dims)) == len(all_dims)
        processor_base_candidates = filter(lambda n: devides(n), range(1,upper_bound))

        # 6 for getting to the 8 processor base
        processors_base = [processor_base_candidates[int(pos)] for pos in np.linspace(6, len(processor_base_candidates)-1, 9).tolist()]
        processors = [dim**2 for dim in processors_base]
        print "Got the following processor number for scalapack " + str(processors) + "\n"
        return processors

    @staticmethod
    def generate_caps_bench_params(matrix_bound, matrix_dims):
        """
        The matrix dimension must be a multiple of:
        (2^r)*(7^ceil(b/2))*f
        where r is the number of recursive steps, and b is the number of BFS steps, and the number of processes is:
        f*7^b,
        where f is 1, 2, 3, 4, 5, or 6.
        :return:
        """

        # Get upto 64000 processes to check for the matrix multiplications
        matrix_dim = []
        for rec_level in range(3, 7):
            for f in range(1,7):
                m_dim = (2**rec_level)*(7**(math.ceil((rec_level-2)/2.0)))*f
                if TestCasesGenerator._is_valid_setup(matrix_bound, [m_dim,m_dim], [m_dim,m_dim]):
                    matrix_dim += [(2**rec_level)*(7**(math.ceil(rec_level/2.0)))*f]

        all_dims = matrix_dims[0]
        all_dims += matrix_dims[1]
        def devides(n):
            return len(filter(lambda x: x % n == 0, all_dims)) == len(all_dims)

        processor_base_candidates = filter(lambda n: devides(n), matrix_dim)
        print "Got the following matrix sizes " + str(matrix_dim)
        print "Got the following matrix sizes " + str(processor_base_candidates)
    
if __name__ == "__main__":
    matrix_bound = 10800
    #TestCasesGenerator.generate_normalized_test_set((matrix_bound, matrix_bound))
    mat1, mat2 = TestCasesGenerator.generate_smirnov_bench_params((matrix_bound, matrix_bound),[256])
    #TestCasesGenerator.generate_scalapack_bench_params((mat1, mat2))
    #TestCasesGenerator.generate_caps_bench_params((matrix_bound, matrix_bound), (mat1,mat2))
    #TestCasesGenerator.generate_bench_test((matrix_bound, matrix_bound), ([86400, 86400], [86400, 86400]))
    TestCasesGenerator.generate_bench_test((matrix_bound, matrix_bound), ([5400, 10800], [10800, 2160]), [256])