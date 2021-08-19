/***************************************
 * Name: prog05.c
 * Author: Charles Carter
 * Date: July 18, 2021
 * Purpose: for loops
***************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    printf("for loops, the TIMES table\n");

    printf("Times ");
    for(int i = 1; i <= 12; i++)
        printf("%6d", i);
    printf("\n");

    for(int i = 1; i <= 12; i++)
    {
        printf("%-5d=", i);
        for(int j = 1; j <= 12; j++)
        {
            printf("%6d", i * j);
        }
        printf("\n");
    }

    printf("while loops, the POWER table\n");

    int i = 1;
    printf("Power     ");
    while(i <= 7)
    {
        printf("%10d", i);
        i++;
    }
    printf("\n");

    int j = 1;
    while(j <= 7)
    {
        printf("%-10d^", j);
        int k = 1;
        while(k <= 7)
        {
            printf("%10.0f", pow(j, k));
            k++;
        }
        printf("\n");
        j++;
    }

    return 0;
}

