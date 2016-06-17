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
	mpic++ -std=c++11 -g ./testing/production/*.cpp ./testing/production/matrix_creation/*.cpp ./common/*.cpp ./distribution/*.cpp ./matrix/*.cpp ./measurement/*.cpp 2> compile.out.txt

