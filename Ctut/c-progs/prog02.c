/***************************************
 * Name: prog02.c
 * Author: Charles Carter
 * Date: July 16, 2021
 * Purpose: "hello world" program with one command line arg
***************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, %s\n", argv[1]);

    return 0;
}

