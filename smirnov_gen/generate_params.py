#!/usr/bin/python

import math
import sys


# define a function
def lcm(x, y):
    """This function takes two
   integers and returns the L.C.M."""

    # choose the greater number
    if x > y:
        greater = x
    else:
        greater = y

    while (True):
        if ((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1

    return lcm


def log(to_print, debug=True):
    if debug:
        print to_print


def generate_dimension(recursion_level, num_sub_problems, debug=True):
    processor_grid_base = 40 / num_sub_problems
    processor_number = processor_grid_base ** recursion_level
    processor_row_dim = processor_number / processor_grid_base
    processor_col_dim = processor_grid_base

    log("Processor dim is " + str((processor_row_dim, processor_col_dim)), debug)

    a_dimension = None
    b_dimension = None
    c_dimension = None

    alg_dimension = {
        0: (3, 3, 6),
        1: (3, 6, 3),
        2: (6, 3, 3),
    }

    a_base_dim = (1, 1)
    b_base_dim = (1, 1)
    for i in range(recursion_level):
        a_row = alg_dimension[i % 3][0]
        a_col = alg_dimension[i % 3][1]
        b_row = alg_dimension[i % 3][1]
        b_col = alg_dimension[i % 3][2]

        a_base_dim = (a_base_dim[0] * a_row, a_base_dim[1] * a_col)
        b_base_dim = (b_base_dim[0] * b_row, b_base_dim[1] * b_col)

    log("A base dim " + str(a_base_dim), debug)
    log("B base dim " + str(b_base_dim), debug)

    # In order to multiply A and B we must find the lcm of a_col_dim and b_row_dim
    a_dimension = [processor_row_dim * a_base_dim[0], processor_col_dim * a_base_dim[1]]
    b_dimension = [processor_row_dim * b_base_dim[0], processor_col_dim * b_base_dim[1]]
    lcm_of_dim = lcm(a_dimension[1], b_dimension[0])
    a_dimension[1] = lcm_of_dim
    b_dimension[0] = lcm_of_dim
    c_dimension = [a_dimension[0], b_dimension[1]]

    log("A dim " + str(a_dimension), debug)
    log("B dim " + str(b_dimension), debug)
    log("C dim " + str(c_dimension), debug)

    log("Amount of sub problems on each processor is %f" % (num_sub_problems), debug)

    return a_dimension, b_dimension, processor_number, processor_row_dim, processor_col_dim


if __name__ == "__main__":
    if len(argv) < 2:
        print 'Usage <recursion_level> <num_sub_problems>'
        exit(0)

    recursion_level = int(argv[0])
    num_sub_problems = int(argv[1])
    generate_dimension(recursion_level, num_sub_problems)
