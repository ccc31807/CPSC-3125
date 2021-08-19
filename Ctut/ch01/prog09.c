/******************************
 * Name: prog09.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to add two integers using pointers and functions.
 * ****************************/

#include <stdio.h>

//function declaration
void sum (int*, int*, int*);

int main(int argc, char *argv[])
{
    int num1, num2, total;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    //function call
    sum(&num1, &num2, &total);
    printf("Total = %d\n", total);
    return 0;
}

//function definition
void sum (int *a, int *b, int *t)
{
    *t = *a + *b;
}
