/***************************************
 * Name: lab02_carter.c
 * Author: Charles Carter
 * Date: September 30, 2021
 * Purpose: calculate and print table of reciprocals
***************************************/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    printf("for loops, the reciprocal table\n");

    for(double i = 1.0; i <= 12.0; i++)
        printf("%-7.0lf", i);
    printf("\n");

    for(double i = 1.0; i <= 12.0; i++)
    {
        //printf("%-7.0lf/", i);
        for(double j = 1.0; j <= 12.0; j++)
        {
            printf("%7.4lf", i / j);
        }
        printf("\n");
    }


    return 0;
}

