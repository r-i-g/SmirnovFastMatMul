
all:
	mpic++ -std=c++11 *.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test:
	mpic++ -std=c++11 -g ./testing/test_multiplication.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_dfs:
	mpic++ -std=c++11 -g ./testing/test_dfs.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_363:
	mpic++ -std=c++11 -g ./testing/test_multiplication_363.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt

test_move:
	mpic++ -std=c++11 -g ./testing/test_move_ctor.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out.txt