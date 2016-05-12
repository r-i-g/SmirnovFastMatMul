#!/usr/bin/python
import sys

def init_matrix(row_dim, col_dim, value=None):
	matrix = []
	counter = 0
	for i in range(row_dim):
		row = []
		for j in range(col_dim):
			if value == None:
				row += [counter] 
			else:
				row += [value]
			counter += 1
		matrix.append(row)
	return matrix	

def matrix_mul(a_row_dim, a_col_dim, b_col_dim):
	a = init_matrix(a_row_dim, a_col_dim)
	b = init_matrix(a_col_dim, b_col_dim)
	c = init_matrix(a_row_dim, b_col_dim, 0)
	
	for i in range(len(a)):
	   # iterate through columns of b
	   for j in range(len(b[0])):
	       # iterate through rows of b
	       for k in range(len(b)):
		   c[i][j] += a[i][k] * b[k][j]

	return c

if __name__ == "__main__":
	print matrix_mul(int(sys.argv[1]),int(sys.argv[2]), int(sys.argv[3]))
