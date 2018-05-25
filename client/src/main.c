//
// Created by Kiro47 on 5/25/18.
// Copyright (c) 2018 Kiro47 
// For more information see LICENSE and FULL_LICENSE files.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double PROGRAM_VERSION = 0.01;

/**
 * Prints help message for program
 */
void usage()
{
    printf("Smart Disk Monitor Client V-%f\n", PROGRAM_VERSION);
    printf("----------------------------------------\n");

    printf("Usage: smartdiskmonitor [OPTION...] \n");
    printf("\n");

    printf("Help Options: \n");
    printf("-h --help        Show help options (this menu) \n");
    printf("-v --version     Print version \n");
    printf("\n");

    printf("Application Options: \n");
    printf("\n");

    printf("----------------------------------------\n");
}

/**
 * Displays invalid argument message
 *
 * @param argc Number of arguments
 * @param argv Array of arguments
 */
void invalid_input( int argc, char** argv[] )
{
    printf("Arguments inputted are invalid! \n");

    printf("Input Command:  ");
    for (int i = 0; i < argc; i++)
    {
        printf("%s ", *argv[ i ] );
    }
    printf(" \n");
    usage();
}

/**
 * Parses The arguments that are initially sent to the program
 *
 * @param argc Number of arguments
 * @param argv Array of arguments
 */
void parse_arguments( int argc, char** argv[] )
{
    int firstArgLength = strlen( *argv[ 2 ] );
    // arg is longer than a single character plus hyphen
    if ( firstArgLength > 2 )
    {
        if ( strcmp( *argv[2] , "--help") )
        {
            usage();
            exit(0);
        }
    }
    else if ( firstArgLength < 2 )
    {
        invalid_input( argc, argv );
        firstArgLength == NULL;
        exit(1);
    }
    else
    {
        // ignores hyphen
        switch ( *argv[2][1] )
        {
            case 'h': case 'H' :
                usage();
                exit(0);
            case 'v': case 'V' :
                printf("Version: %f \n", PROGRAM_VERSION);
                exit(0);
            default:
                invalid_input( argc, argv );
                exit(1);
        }
    }

}

/**
 *
 * Entry method to program
 *
 * @param argc Number of arguments
 * @param argv Array of arguments
 * @return
 */
int main( int argc, char** argv[] )
{
    printf("Hello World");

    // No args
    if ( argc == 1 )
    {

    }
    // args present
    else
    {
        parse_arguments( argc, argv );
    }

    return 0;
}