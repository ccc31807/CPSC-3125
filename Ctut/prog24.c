/***************************************
 * Name: prog24.c
 * Author: Charles Carter
 * Date: July 25, 2021
 * Purpose: bitwise operators, and, or, XOR, not
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

//main function
int main(int argc, char *argv[])
{
    printf("Bitwise operators, AND, OR, XOR, NOT, prog24.c\n");

    unsigned int n1 = 0525u, n2 = 0707u, n3 = 0122;

    printf("Decimal values: n1 = %i, n2 = %i, n3 = %i\n", n1, n2, n3);
    printf("Octal values: n1 = %o, n2 = %o, n3 = %o\n", n1, n2, n3);
    printf("Hex values: n1 = %x, n2 = %x, n3 = %x\n", n1, n2, n3);

    printf("=============================================\n");
    printf("%o, %o, %o\n", n1 & n2, n1 | n2, n1 ^ n2);
    printf("%o, %o, %o\n", ~n1, ~n2, ~n3);
    printf("%o, %o, %o\n", n1 ^ n1, n1 & ~n2, n1 | n2 | n3);
    printf("%o, %o\n", n1 | (n2 & n3), n1 | (n2 & ~n3));
    printf("%o, %o\n", ~(~n1 & ~n2), ~(~n1 | ~n2));

    printf("=============================================\n");
    printf("Swapping values: n1 = %o, n2 = %o\n", n1, n2);
    n1 ^= n2;
    n2 ^= n1;
    n1 ^= n2;
    printf("Swapped values: n1 = %o, n2 = %o\n", n1, n2);

    
    return 0;
}

//user defined functions

