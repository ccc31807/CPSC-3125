/***************************************
 * Name: prog21.c
 * Author: Charles Carter
 * Date: July 24, 2021
 * Purpose: introduces pointers
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

//main function
int main(int argc, char *argv[])
{
    printf("Introduction to pointers, prog21.c\n");

    //*******************************************
    printf("\nPart 1, ints and pointers to ints\n");

    int count = 10;
    int x;               //uninitialized
    int *ptr_i;         //pointer is uninitialized

    ptr_i = &count;     //initialize pointer to address of count 
    x = *ptr_i;         //initialize x to value of pointer

    printf("count is %d, *ptr_i is %d, and x is %d\n", count, *ptr_i, x);
    printf("address of count is %p, value of pointer is %p, address of x is %p\n", &count, ptr_i, &x);

    //*******************************************
    printf("\nPart 2, chars and pointers to chars\n");

    char c = 'A';
    char *ptr_c = &c;       //declare and initialize ptr_c as pointer to c
    printf("c is %c, *ptr_c is %c\n", c, *ptr_c);

    c = 'B';                //change value of c
    printf("now after change, c is %c, *ptr_c is %c\n", c, *ptr_c);

    *ptr_c = 'D';
    printf("now changing pointer, c is %c, *ptr_c is %c\n", c, *ptr_c);
    printf("address of c is %p, value of ptr_c is %p\n", &c, ptr_c);

    //*******************************************
    printf("\nPart 3, pointers in expressions\n");

    int p, q;           //uninitialized
    int *ptr_r, *ptr_s; //pointers uninitialized

    p = 2020;
    ptr_r = &p;
    q = *ptr_r / 2 + 33;
    ptr_s = ptr_r;
    printf("Values: p = %d, q = %d, *ptr_r = %d, *ptr_s = %d\n",  p, q, *ptr_r, *ptr_s);
    printf("Addresses: &p = %p, &q = %p, ptr_r = %p, ptr_s = %p\n",  &p, &q, ptr_r, ptr_s);


    

    return 0;
}

//user defined functions

