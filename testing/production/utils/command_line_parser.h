//
// Created by rig on 05/03/16.
//

#ifndef FASTMATMUL_COMMAND_LINE_PARSER_H_H
#define FASTMATMUL_COMMAND_LINE_PARSER_H_H

#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

class CommandLineParser {

public:

    CommandLineParser(int argc, char* argv[]);

    int get_processor_row_dim();

    int get_processor_col_dim();

    int get_num_subproblems();

    int get_recursion_levels();

    ifstream& get_in_file();

private:

    int find_option( int argc, char **argv, const char *option );

    int read_int( int argc, char **argv, const char *option, int default_value );

    string read_string( int argc, char **argv, const char *option, std::string default_value="");

    int m_sub_problems;
    int m_processor_row_dim;
    int m_processor_col_dim;

    ifstream m_in_file;
    ifstream m_compare_file;
};



#endif //FASTMATMUL_COMMAND_LINE_PARSER_H_H
