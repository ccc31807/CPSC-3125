/***************************************
 * Name: prog37.c
 * Author: Charles Carter
 * Date: July 30, 2021
 * Purpose: illustrate debug code
***************************************/

/************************************
 * Instructions:
 * compile with [#define DEBUG] to enable debugging
 * compile without [#define DEBUG] to disable debugging
 * >gcc prog37.c -o prog37.exe -Wall
 *
 * to enable the command line switch, compile like this
 * >gcc prog37.c -D DEBUG -o prog37.exe -Wall
 * **********************************/

//includes
#include <stdio.h>
#include <stdlib.h>


//variable and function declarations
int process (int i1, int i2)
{
    int val;
#ifdef DEBUG
    fprintf (stderr, "DEBUG>>> process (%i, %i)\n", i1, i2);
#endif
    val = i1 * i2;
#ifdef DEBUG
    fprintf (stderr, "DEBUG>>> return %i\n", val);
#endif
    return val;
}

//main function
int main(int argc, char *argv[])
{
    printf("Illustrate debug code, prog37.c\n");

    int arg1 = 0, arg2 = 0;
    if (argc > 1)
    arg1 = atoi (argv[1]);
    if (argc == 3)
    arg2 = atoi (argv[2]);
#ifdef DEBUG
    fprintf (stderr, "DEBUG>>> processed %i arguments\n", argc - 1);
    fprintf (stderr, "DEBUG>>> arg1 = %i, arg2 = %i\n", arg1, arg2);
#endif
    printf ("%i\n", process (arg1, arg2));
        
    return 0;
}

//user defined functions

