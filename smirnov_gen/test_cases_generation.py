#!/usr/bin/python

from generate_params import *
from generate_test import *

class TestCasesGenerator(object):

    @staticmethod
    def _is_valid_setup(matrix_dim_limitation, mat1, mat2):
        row_limit, col_limit = matrix_dim_limitation
        return mat1[0] <= row_limit and mat2[0] <= row_limit and mat1[1] <= col_limit and mat2[1] <= col_limit
        
    @staticmethod
    def generate_test_set(matrix_dim_limitation):
        row_limitation, col_limitation = matrix_dim_limitation
        sub_problems = [1,2,5,8,10,20]
        for rec_level in range(2,5):
            for sub_problem in sub_problems:
                mat1, mat2, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level, sub_problem, False)
                if TestCasesGenerator._is_valid_setup(matrix_dim_limitation, mat1, mat2):
                    print "For " + str(processor_number) + " processes and " + str(sub_problem) +" amount of subproblems, got matrix sizes of " + str((mat1, mat2))
                    TestGenerator(mat1[0], mat1[1], mat2[0], mat2[1], sub_problem, processor_row_dim, processor_col_dim)
   
    
if __name__ == "__main__":
    
    TestCasesGenerator.generate_test_set((5000,5000))
        
