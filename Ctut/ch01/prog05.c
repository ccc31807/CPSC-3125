/******************************
 * Name: prog05.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to calculate the sum of numbers from m to n.
 * ****************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m, i, sum =0;
    printf("Enter the first value of m : ");
    scanf("%d", &m);
    i=m;
    printf("Enter the high value of n : ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("The sum of numbers from %d to %d = %d", m, n, sum);
    return 0;
}
