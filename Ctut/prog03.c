/***************************************
 * Name: prog03.c
 * Author: Charle Carter
 * Date: July 16, 2021
 * Purpose: "hello world" program with multiple command line args
***************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, ");
    int i = 0;
    while(argv[++i] != NULL)
    {
        printf("%s ", argv[i]);
    }
    

    return 0;
}

