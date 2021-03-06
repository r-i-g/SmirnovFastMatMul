SCALAPACKLIB = /usr/lib/libscalapack-openmpi.a

BLACSLIB = \
/usr/lib/libblacsF77init-openmpi.a \
/usr/lib/libblacsCinit-openmpi.a \
/usr/lib/libblacs-openmpi.a \
/usr/lib/libblacsF77init-openmpi.a \
/usr/lib/libblacsCinit-openmpi.a

BLASLIB = /usr/lib/libblas.a

LAPACK = /usr/lib/lapack/liblapack.a

LIBS = -lscalapack-openmpi -lblas -llapack -lblacs-openmpi

INCLUDES = \
/usr/lib/libscalapack-openmpi.a \
/usr/lib/libblacsCinit-openmpi.a \
/usr/lib/libblacs-openmpi.a \
/usr/lib/libblacsCinit-openmpi.a \
/usr/lib/lapack/liblapack.a \
/usr/lib/libblacsF77init-openmpi.a \
/usr/lib/libblas.a

CODE = -fopenmp ./algorithm/*.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./measurement/*.cpp -lblas

PDGEMM = ./pdgemm/*.cpp

TEST_UTILS = ./testing/production/matrix_creation/*.cpp ./testing/production/utils/*.cpp

all:
	mpic++ -std=c++11 -g ./testing.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test:
	mpic++ -std=c++11 -g ./testing/test_multiplication.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_dfs:
	mpic++ -std=c++11 -g ./testing/test_dfs.cpp ./common/*.cpp ./communication/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_363:
	mpic++ -std=c++11 -g ./testing/test_multiplication_363.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_move:
	mpic++ -std=c++11 -g ./testing/test_move_ctor.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_dist:
	mpic++ -std=c++11 -g ./testing/test_dist_smir.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp 2> compile.out.txt

test_bfs:
	mpic++ -std=c++11 -g ./testing/test_bfs.cpp ./common/*.cpp ./communication/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_cond:
	mpic++ -std=c++11 -g ./testing/test_condensed.cpp ./common/*.cpp ./communication/*.cpp ./distribution/*.cpp ./matrix/*.cpp 2> compile.out.txt

test_temp:
	mpic++ -std=c++11 -g ./testing/test_template.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp 2> compile.out.txt

test_mes:
	mpic++ -std=c++11 -g ./testing/test_mes.cpp ./common/*.cpp ./measurement/*.cpp 2> compile.out.txt

test_dgemm_o:
	mpic++ -std=c++11 -fopenmp ./testing/test_dgemm_omp.cpp -lblas 2> compile.out.txt

test_dgemm_g:
	mpic++ -std=c++11 ./testing/test_dgemm_gnu.cpp `gsl-config --cflags --libs`> compile.out.txt

test_prod:
	mpic++ -std=c++11 -g -fopenmp ./testing/production/main.cpp ./testing/production/matrix_creation/*.cpp ./algorithm/*.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./measurement/*.cpp -lblas 2> compile.out.txt

test_prod_dgemm:
	mpic++ -std=c++11 -g -fopenmp ./testing/production/dgemm_tester.cpp ./testing/production/utils/*.cpp ./testing/production/matrix_creation/*.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./measurement/*.cpp  -lblas -o dgemm.out 2> compile.out.txt

test_pdgemm:
	mpic++ -std=c++11 -g -fopenmp ./testing/production/test_pdgemm.cpp ./testing/production/utils/*.cpp ./testing/production/matrix_creation/*.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./measurement/*.cpp -lscalapack-openmpi -lblacs-openmpi -lblacsCinit-openmpi -lblacs-openmpi -llapack -lblas -lgfortran 2> compile.out.txt

test_bench_pdgemm:
	mpic++ -std=c++11 -g ./testing/production/test_pdgemm_benchmark.cpp $(TEST_UTILS) $(CODE) $(PDGEMM) $(LIBS) 2> compile.out.txt

test_bench_smir:
	mpic++ -std=c++11 -g -fopenmp ./testing/production/test_smirnov_benchmark.cpp $(TEST_UTILS) $(CODE) -lblas 2> compile.out.txt

test_pos_mat:
	mpic++ -std=c++11 -g ./testing/test_pos_matrix.cpp $(CODE) 2> compile.out.txt

test_bench_cor:
	mpic++ -std=c++11 -g ./testing/production/test_bench_correctness.cpp $(TEST_UTILS) $(CODE) $(PDGEMM) $(LIBS) 2> compile.out.txt