//
// Created by rig on 05/03/16.
//
#include <string>
#include <iostream>
#include "command_line_parser.h"

using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[]) {
    // Read the parameters from the command line
    string in_file = read_string( argc, argv, "-i", NULL );
    string compare_file = read_string( argc, argv, "-c", NULL );

    cout << "got the following in file " << in_file << endl;
    cout <<  "get the follwing compare file " << compare_file << endl;

    // Reading the matrices and allocating ourselves the appropriate data

    // Running and timing the algorithm

    // 
    return 0;
}