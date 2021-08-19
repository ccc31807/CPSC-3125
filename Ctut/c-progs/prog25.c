/***************************************
 * Name: prog25.c
 * Author: Charles Carter
 * Date: July 25, 2010
 * Purpose: left and right shifts
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

//main function
int main(int argc, char *argv[])
{
    printf("Shift happens, prog25.c\n");

    long unsigned int n1 = 255u;
    long unsigned int n2 = 256u;
    long unsigned int n3 = 257u;

    printf("unaltered numbers: n1 = %ld, n2 = %ld, n3 = %ld\n", n1, n2, n3);
    printf("left shifted n1: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld\n", n1 << 1, n1 << 2, n1 << 3, n1 << 4, n1 << 5); 
    printf("left shifted n2: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld\n", n2 << 1, n2 << 2, n2 << 3, n2 << 4, n2 << 5); 
    printf("left shifted n3: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld\n", n3 << 1, n3 << 2, n3 << 3, n3 << 4, n3 << 5); 
    printf("right shifted n1: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld, 6 = %ld\n", n1 >> 1, n1 >> 2, n1 >> 3, n1 >> 4, n1 >> 5, n1 >> 6); 
    printf("right shifted n2: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld, 6 = %ld\n", n2 >> 1, n2 >> 2, n2 >> 3, n2 >> 4, n2 >> 5, n2 >> 6); 
    printf("right shifted n3: 1 = %ld, 2 = %ld, 3 = %ld, 4 = %ld, 5 = %ld, 6 = %ld\n", n3 >> 1, n3 >> 2, n3 >> 3, n3 >> 4, n3 >> 5, n3 >> 6); 


    return 0;
}

//user defined functions

