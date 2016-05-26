#!/usr/bin/python

"""
A testing generation frame work creating the following products:
    input file containing the matrices to multiply
    out file containing the result of the matrices multiplied
    batch script to run on rhea server or titan server accordingly
"""
import sys,random,os

class Matrix:
    def __init__(self, row, col, array):
        self.row = row
        self.col = col
        self.array = array

    def __add__(self, other):
        array = [[0]*self.col for i in xrange(self.row)]
        for i in xrange(self.row):
            for j in xrange(self.col):
                array[i][j] = self.array[i][j]+other.array[i][j]
        return Matrix(self.row, self.col, array)

    def __sub__(self, other):
        array = [[0]*self.col for i in xrange(self.row)]
        for i in xrange(self.row):
            for j in xrange(self.col):
                array[i][j] = self.array[i][j] - other.array[i][j]
        return Matrix(self.row, self.col, array)

    def __mul__(self, other):
        array = [[0]*other.col for i in xrange(self.row)]
        for i in xrange(self.row):
            for j in xrange(other.col):
                for k in xrange(other.row):
                    array[i][j] += self.array[i][k]*other.array[k][j]
        return Matrix(self.row, other.col, array)

    def __str__(self):
        rows = [' '.join([str(e) for e in r]) for r in self.array]
        return '\n'.join(rows)
        
def fill_matrix(row, col):
    mat = []
    for i in xrange(row):
        mat.append([])  
    for i in xrange(row):
        for j in xrange(col):
            mat[i].append( random.randint(1,5) )
    return mat

def matrix_dim(mat):
    return "{row} {col}\n".format(row=str(mat.row),col=mat.col)

def factors(a):
    return [f for f in xrange(1,a+1) if a%f==0]

class TestGenerator(object):

    def __init__(self, mat1_row, mat1_col, mat2_row, mat2_col, num_sub_problems, proc_row_dim, proc_col_dim):
        self._proc_row_dim = proc_row_dim
        self._proc_col_dim = proc_col_dim
        self._num_sub_problems = num_sub_problems
        self._nproc = self._proc_row_dim * self._proc_col_dim
        
        self.multiply_matrices(mat1_row, mat1_col, mat2_row, mat2_col)
        self._multiplication_params = "{row1}_{col1}_{col2}_{num_sub_problems}_{proc_row_dim}_{proc_col_dim}".format(row1=self._mat1.row, col1=self._mat1.col, col2=self._mat2.col, 
                                                                                                                     num_sub_problems=num_sub_problems, 
                                                                                                                     proc_row_dim=proc_row_dim, proc_col_dim=proc_col_dim)        
        self._generate_test()

    def create_file(self, name):
        folder = os.path.realpath('smirnov_gen/cases/')
        if not os.path.exists(folder):
            os.makedirs(folder)
        return open(os.path.join(folder,name), "w")
    
    
    def multiply_matrices(self, mat1_row, mat1_col, mat2_row, mat2_col):
        self._mat1 = fill_matrix(mat1_row, mat1_col)
        self._mat2 = fill_matrix(mat2_row, mat2_col)
    
        self._mat1 = Matrix(mat1_row,mat1_col,self._mat1)
        self._mat2 = Matrix(mat2_row,mat2_col,self._mat2)
 
        self._mat3 = self._mat1 * self._mat2
        
    def write_input_matrices(self):
        input_matrices = self.create_file(self._multiplication_params + ".in")
        input_matrices.write(matrix_dim(self._mat1))
        input_matrices.write(matrix_dim(self._mat2))
        input_matrices.write(str(self._mat1)+'\n')
        input_matrices.write(str(self._mat2)+'\n')
        input_matrices.close()
        
    def write_multiplication_output(self):
        multiplication_output = self.create_file(self._multiplication_params+".correct")
        multiplication_output.write(str(self._mat3)+'\n')
        multiplication_output.close()

    def write_run_parameters(self):
        run_params_output = self.create_file(self._multiplication_params+".params")
        run_params = "mpirun -np {nproc} ./a.out -i cases/{case}.in -c cases/{case}.correct -s {sub_problems} -n {proc_row_dim} -m {proc_col_dim}\n".format(sub_problems=self._num_sub_problems,
                                                                                                                                               nproc=self._nproc,
                                                                                                                                               case=self._multiplication_params,
                                                                                                                                               proc_row_dim=self._proc_row_dim,
                                                                                                                                               proc_col_dim=self._proc_col_dim)
        run_params_output.write(run_params)
        run_params_output.close()
    

    def write_rhea_job(self):
        rhea_job_output_file_name = "rhea_{multiplication_params}.pbs".format(multiplication_params=self._multiplication_params)
        rhea_job_output = self.create_file(rhea_job_output_file_name)
        job_content = \
'''#!/bin/bash
#PBS -A csc182
#PBS -N {job_name}
#PBS -o {output_file}
#PBS -j oe
#PBS -l walltime=00:05:00,nodes={nproc}

cd $PBS_O_WORKDIR/FastMatMul
date
mpirun -np {nproc} ./a.out -i smirnov_gen/cases/{multiplication_params}.in -c smirnov_gen/cases/{multiplication_params}.correct -s {num_sub_problems} -n {proc_row_dim} -m {proc_col_dim}
'''.format(job_name=self._multiplication_params, 
           output_file="rhea_{multiplication_params}.txt".format(multiplication_params=self._multiplication_params), 
           nproc=self._nproc, 
           multiplication_params=self._multiplication_params, 
           num_sub_problems=self._num_sub_problems,
           proc_row_dim=self._proc_row_dim, 
           proc_col_dim=self._proc_col_dim)
           
        rhea_job_output.write(job_content)
        rhea_job_output.close()

    def write_titan_job(self):
        titan_job_output_file_name = "titan_{multiplication_params}.pbs".format(multiplication_params=self._multiplication_params)
        titan_job_output = self.create_file(titan_job_output_file_name)
        job_content = \
'''#!/bin/bash
#PBS -A csc182
#PBS -N {job_name}
#PBS -o {output_file}
#PBS -j oe
#PBS -l walltime=00:05:00,nodes={nproc}
#PBS -l gres=atlas1%atlas2

cd $MEMBERWORK/csc182/FastMatMul
date
aprun -n {nproc} ./a.out -i smirnov_gen/cases/{multiplication_params}.in -c smirnov_gen/cases/{multiplication_params}.correct -s {num_sub_problems} -n {proc_row_dim} -m {proc_col_dim}
'''.format(job_name=self._multiplication_params, 
           output_file="titan_{multiplication_params}.txt".format(multiplication_params=self._multiplication_params), 
           nproc=self._nproc, 
           multiplication_params=self._multiplication_params, 
           num_sub_problems=self._num_sub_problems,
           proc_row_dim=self._proc_row_dim, 
           proc_col_dim=self._proc_col_dim)
           
        titan_job_output.write(job_content)
        titan_job_output.close()

    def _generate_test(self):
        self.write_input_matrices()
        self.write_multiplication_output()
        self.write_run_parameters()
        self.write_rhea_job()
        self.write_titan_job()

if __name__ == "__main__":
    # Important pramters:
    #   * Matrix dimensions
    #   * Number of supbroblems to calculate in each processor
    #   * Dimensions of the processor matrix grid
    
    if len(sys.argv) < 7:
        print 'Usage <A row dim> <A col dim> <B col dim> <num sub problems> <processor row dim> <processor col dim>'
        exit(1)
    
    # Paramter convertion
    mat1_row = int(sys.argv[1])
    mat1_col = int(sys.argv[2])
    mat2_row = mat1_col
    mat2_col = int(sys.argv[3])
    num_sub_problems = int(sys.argv[4])
    proc_row_dim = int(sys.argv[5])
    proc_col_dim = int(sys.argv[6])
    nproc = proc_row_dim * proc_col_dim
    
    TestGenerator(mat1_row, mat1_col, mat2_row, mat2_col, num_sub_problems, proc_row_dim, proc_col_dim)
    
                         
