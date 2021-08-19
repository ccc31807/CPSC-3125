/******************************
 * Name: prog03.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to find whether a number is even or odd.
 * ****************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int a;
    system("clear");
    printf("Enter the value of a : ");
    scanf("%d", &a);
    //pred will contain either 0 = false, or 1 = true
    bool pred;
    //a mod 2 will return either 0 or 1
    pred = a % 2;
    //if a mod 2 == 1 (true), then print ODD, else print EVEN
    if(pred)
        printf("%d is odd\n", a);
    else
        printf("\n %d is even\n", a);
    return 0;
}
