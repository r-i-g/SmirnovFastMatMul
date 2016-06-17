#!/usr/bin/python

from generate_params import *
from generate_test import *
from generators_utils import lcm as lcmf


class TestCasesGenerator(object):
    """
    This class generates test suits for experimentation
    """
    SUB_PROBLEMS = [1, 2, 4, 5, 8, 10, 20]
    REC_LEVEL = range(2, 5)

    @staticmethod
    def _is_valid_setup(matrix_dim_limitation, mat1, mat2):
        row_limit, col_limit = matrix_dim_limitation
        return mat1[0] <= row_limit and mat2[0] <= row_limit and mat1[1] <= col_limit and mat2[1] <= col_limit
        
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

    
if __name__ == "__main__":
    
    TestCasesGenerator.generate_normalized_test_set((500000, 500000))
