/******************************
 * Name: prog06.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to calculate the average of first n numbers.
 * ****************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, i = 0, sum =0;
    float avg = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do
    {
    sum += i;
    i++;
    } while(i<=n);

    avg = (float)sum/n;
    printf("The sum of first %d numbers = %d\n",n, sum);
    printf("The average of first %d numbers = %.2f\n", n, avg);
    return 0;
}
