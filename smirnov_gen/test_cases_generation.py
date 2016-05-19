#!/usr/bin/python

from parametes_generator import *

def matrix_ranges(rec_level):
    #rec_level = base_dim["rec_level"]
    #init_dim = base_dim['dim']
    
    # The amount of sub problems a process takes
    sub_problems = [1,2,5,8,10,20]
    for sub_problem in sub_problems:
        a_dim, b_dim, processor_number, processor_row_dim, processor_col_dim = generate_dimension(rec_level, sub_problem, False)
        print "For " + str(processor_number) + " processes and " + str(sub_problem) +" amount of subproblems, got matrix sizes of " + str((a_dim, b_dim))
    
    
if __name__ == "__main__":
    
    # Different levels of recursion (3,3,6), (9,18,18), (54,54,54)
    base_matrix_dim = [(9,18,18)]
    
    #for rec_level in range(5):
    for rec_level in range(2,5):
        print "For " + str(rec_level) + " recursion levels"
        matrix_ranges(rec_level)
        print 
        
