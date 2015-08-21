
all:
	mpic++ -std=c++11 *.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp ./algorithm/*.cpp  2> compile.out
