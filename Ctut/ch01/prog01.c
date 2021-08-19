/******************************
 * Name: prog01.c
 * Author: C data structures
 * Date August 18, 2021
 * Purpose:  Write a program to calculate the area of a circle.
 * ****************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double radius, area;
    const double pi = 4.0 * atan(1.0);
    system("clear");
    //printf("pi is %.10lf\n", pi);
    printf("\n Enter the radius of the circle : ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf(" \n Area = %.2lf", area);
    return 0;
}

