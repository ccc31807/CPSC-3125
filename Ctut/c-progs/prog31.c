/*************************************
 * Name: prog31.c
 * Author: Charles Carter
 * Date: July 26, 2021
 * Purpose: uses addition.c library and addition.h header file
 * Insturctions: to link, compile like this: gcc myadd.c addition.o -o myadd.exe -Wall
 * ***************************************/

#include <stdio.h>
#include "addition.h"

int main(int argc, char *argv[])
{

    printf("This is myadd.c\n");

    int lhs, rhs;
    printf("Please enter an integer as the LHS:  ");
    scanf("%d", &lhs);
    printf("Please enter an integer as the RHS:  ");
    scanf("%d", &rhs);

    printf("You entered [%d] <op> [%d]\n", lhs, rhs);

    int sum;
    sum = addition(lhs, rhs);
    printf("sum is %d\n", sum);

    int diff;
    diff = subtraction(lhs, rhs);
    printf("diff is %d\n", diff);

    int prod;
    prod = multiplication(lhs, rhs);
    printf("prod is %d\n", prod);

    int mod;
    mod = modulus(lhs, rhs);
    printf("mod is %d\n", mod);

    double div;
    div = division(lhs, rhs);
    printf("quotient is %lf\n", div);

    return 0;
}
