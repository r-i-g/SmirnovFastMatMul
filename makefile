
all:
	mpic++ *.cpp ./common/*.cpp ./communication/*.cpp ./matrix/*.cpp 2> compile.out
