/***************************************
 * Name: root.c
 * Author: Charle Carter
 * Date: July 18, 2021
 * Purpose: calculate square root by bisection algorithm
***************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Square root calculator\n");

    double num = 0.0;
    double difference = 1.0;
    double low = 0.0;
    double high;
    double mid;
    double trysquare;
    double tolerance = .000001;
    printf("Enter number for which you want to find the square root: ");
    scanf("%lf", &num);
    high = num;

    int count = 0;
    do
    {
       mid = ((double) low + high) / 2.0;
       trysquare = mid * mid; 
       if(trysquare > num)
       {
           difference = trysquare - num;
           high = mid;
       }
       else
       {
           difference = num - trysquare;
           low = mid;
       }
       count++;
    } while (difference > tolerance);
    printf("\n   YES!, the square root of %lf is %lf, found in %i trys\n", num, mid, count);


    return 0;
}

