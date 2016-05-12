#!/usr/bin/python

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
        print other.col, self.row
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

def create_file(name):
    folder = os.path.realpath('smirnov_gen/cases/')
    if not os.path.exists(folder):
        os.makedirs(folder)
    return open(os.path.join(folder,name), "w")
    

if __name__ == "__main__":
    # Important pramters:
    #   * Matrix dimensions
    #   * Number of supbroblems to calculate in each processor
    #   * 
    
    if len(sys.argv) < 6:
        print 'Usage <A row dim> <A col dim> <B col dim> <num sub problems> <num_processes>'
        exit(1)
    
    mat1_row = int(sys.argv[1])
    mat1_col = int(sys.argv[2])
    mat2_row = mat1_col
    mat2_col = int(sys.argv[3])
    num_sub_problems = int(sys.argv[4])
    nproc = int(sys.argv[5])
    
    oname = "{row1}_{col1}_{col2}_{num_sub_problems}".format(row1=mat1_row, col1=mat1_col, col2=mat2_col, num_sub_problems=num_sub_problems)
    
    mat1 = fill_matrix(mat1_row, mat1_col)
    mat2 = fill_matrix(mat2_row, mat2_col)
    
    mat1 = Matrix(mat1_row,mat1_col,mat1)
    mat2 = Matrix(mat2_row,mat2_col,mat2)
 
    mat3 = mat1*mat2
    
    o1 = create_file(oname+".in")
    o1.write(matrix_dim(mat1))
    o1.write(matrix_dim(mat2))
    o1.write(str(mat1)+'\n')
    o1.write(str(mat2)+'\n')
    o1.close()
    
    o2 = create_file(oname+".correct")
    o2.write(str(mat3)+'\n')
    o2.close()

    # write valid run parameters
    proccessor_base = 40 / num_sub_problems
    alg = {0:3,1:3,2:6}
    log_grid=0
    log_alg=0
    s = min(mat1_row,mat1_col,mat2_col)
    while s % proccessor_base == 0:
        s /= proccessor_base
        log_grid += 1
    while s % alg[log_alg] == 0:
        s /= alg[log_alg]
        log_alg =  (log_alg + 1) % 3
    
    o3 = create_file(oname+".params")
    run_params = "mpirun -np {nproc} ./a.out -i cases/{case}.in -c cases/{case}.correct -s {sub_problems}\n".format(sub_problems=num_sub_problems,
                                                                                                                        nproc=nproc,
                                                                                                                        case=oname)
    o3.write(run_params)
    o3.close()
                         
