//
// Created by rig on 05/03/16.
//

#ifndef FASTMATMUL_COMMAND_LINE_PARSER_H_H
#define FASTMATMUL_COMMAND_LINE_PARSER_H_H

#include <string>
#include <stdio.h>
#include <string.h>

int find_option( int argc, char **argv, const char *option )
{
    for( int i = 1; i < argc; i++ )
        if( strcmp( argv[i], option ) == 0 )
            return i;
    return -1;
}

int read_int( int argc, char **argv, const char *option, int default_value )
{
    int iplace = find_option( argc, argv, option );
    if( iplace >= 0 && iplace < argc-1 )
        return atoi( argv[iplace+1] );
    return default_value;
}

std::string read_string( int argc, char **argv, const char *option, char *default_value )
{
    int iplace = find_option( argc, argv, option );
    if( iplace >= 0 && iplace < argc-1 )
        return argv[iplace+1];
    return default_value;
}

#endif //FASTMATMUL_COMMAND_LINE_PARSER_H_H
