/***************************************
 * Name: lab03_carter.c
 * Author: Charles Carter
 * Date: October 7, 2021
 * Purpose: convert a decimal integer to a binary integer
***************************************/

#include <stdio.h>
#include <math.h>

unsigned long int dec2bin(int num);

int main(int argc, char *argv[])
{
    int num;
    unsigned long int result = 0;
    printf("convert a decimal integer to a binary integer\n");

    printf("Please enter a decimal (base 10) integer: ");
    scanf("%d", &num);

    result = dec2bin(num);
    printf("The resulting binary integer is %ld\n", result);

    return 0;
}

unsigned long int dec2bin(int num)
{
    printf("\nYou entered %d\n", num);
    int rem;
    long int factor = 1;
    unsigned long int result = 0;
    while(num > 0)
    {
        rem = num % 2;
        result += rem * factor;
        factor *= 10;
        num = num / 2;
        printf("    num: %d, factor: %ld, rem: %d, result %ld\n", num, factor, rem, result);
    }
    return result;
}
