/***************************************
 * Name: prog23.c
 * Author: Charles Carter
 * Date: July 25, 2021
 * Purpose: using pointers to swap values
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

void exchange(int * const ptr_int1, int * const ptr_int2);

//main function
int main(int argc, char *argv[])
{
    printf("Using pointers to swap values, prog23.c\n");

    int n1 = 123;
    int n2 = 456;
    int *ptr_n1 = &n1;
    int *ptr_n2 = &n2;

    printf("Before call to exchange, these are the original values:\n");
    printf("    Values: n1 = %d, n2 = %i, *ptr_n1 = %d, *ptr_n2 = %d.\n", n1, n2, *ptr_n1, *ptr_n2);
    printf("    Addresses: n1 = %p, n2 = %p, ptr_n1 = %p, ptr_n2 = %p.\n", &n1, &n2, ptr_n1, ptr_n2);

    exchange(ptr_n1, ptr_n2);

    printf("After call to exchange, these are the swapped values:\n");
    printf("    Values: n1 = %d, n2 = %i, *ptr_n1 = %d, *ptr_n2 = %d.\n", n1, n2, *ptr_n1, *ptr_n2);
    printf("    Addresses: n1 = %p, n2 = %p, ptr_n1 = %p, ptr_n2 = %p.\n", &n1, &n2, ptr_n1, ptr_n2);
    return 0;
}

//user defined functions
void exchange(int * const ptr_int1, int * const ptr_int2)
{
    int temp;
    temp =*ptr_int1;
    *ptr_int1 = *ptr_int2;
    *ptr_int2 = temp;
    //does not return any value, swaps in place
}

