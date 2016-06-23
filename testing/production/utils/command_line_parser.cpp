//
// Created by rig on 23/06/16.
//

#include "command_line_parser.h"
#include "../../../common/common.h"
#include <math.h>

CommandLineParser::CommandLineParser(int argc, char* argv[]) {

    string in_file = read_string( argc, argv, "-i");
    string compare_file = read_string( argc, argv, "-c");
    int m_sub_problems = read_int(argc, argv, "-s", SMIRNOV_SUB_PROBLEMS);
    int m_processor_row_dim = read_int(argc, argv, "-n", -1);
    int m_processor_col_dim = read_int(argc, argv, "-m", -1);

    ifstream m_file(in_file);
    ifstream m_to_compare_file(compare_file);
}

int CommandLineParser::get_processor_row_dim() {
    return m_processor_row_dim;
}

int CommandLineParser::get_processor_col_dim() {
    return m_processor_col_dim;
}

ifstream& CommandLineParser::get_in_file() {
    return m_in_file;
}

int CommandLineParser::get_num_subproblems() {
    return m_sub_problems;
}

int CommandLineParser::get_recursion_levels() {
    int grid_base = SMIRNOV_SUB_PROBLEMS / m_sub_problems;
    int recursion_level = log(m_processor_row_dim * m_processor_col_dim) / log(grid_base);
    return recursion_level;
}

int CommandLineParser::find_option( int argc, char **argv, const char *option )
{
    for( int i = 1; i < argc; i++ )
        if( strcmp( argv[i], option ) == 0 )
            return i;
    return -1;
}

int CommandLineParser::read_int( int argc, char **argv, const char *option, int default_value )
{
    int iplace = find_option( argc, argv, option );
    if( iplace >= 0 && iplace < argc-1 )
        return atoi( argv[iplace+1] );
    return default_value;
}

string CommandLineParser::read_string( int argc, char **argv, const char *option, std::string default_value /*""*/)
{
    int iplace = find_option( argc, argv, option );
    if( iplace >= 0 && iplace < argc-1 )
        return argv[iplace+1];
    return default_value;
}