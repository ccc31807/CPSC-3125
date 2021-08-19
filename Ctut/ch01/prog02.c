/******************************
 * Name: prog02.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to convert an integer into the corresponding floating point number.
 * ****************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float f_num;
    int i_num;
    system("clear");
    printf("Enter any integer:  ");
    scanf("%d", &i_num);
    f_num = (float)i_num;
    printf("\n The floating point variant of %d is = %f\n", i_num, f_num);
    return 0;
}
