/***************************************
 * Name: prog32.c
 * Author: Charles Carter
 * Date: July 26, 2021
 * Purpose: illustrates DEFINE with proprocessor
***************************************/

//includes
#include <stdio.h>
#include <stdlib.h>

//preprocessor directives
#define IN2CM 2.54
#define YD2MT 0.0944
#define MI2KM 1.60935
#define CM2IN 0.3937
#define MT2YD 1.0924
#define KM2MI 0.6213
#define PI 3.141592654
#define CIRCAREA(r) PI * r * r
#define CIRCCUMF(r) 2 * PI * r
#define SPHVOL(r) 1.33333 * PI * r * r * r

//variable and function declarations
int print_xface();
double get_num();


//main function
int main(int argc, char *argv[])
{
    printf("Preprocessor example, prog32.c\n");
    int what = -1;
    while (1)
    {
        what = print_xface();
        if (what >= 0 && what <= 9)
            break;
        else
            printf("~~~~Input must be between 0 and 9~~~~\n");
    }
    printf("You entered [ %d]\n", what);

    double num;
    if (what != 0)
    {
        num = get_num();
        printf("You entered [%lf]\n", num);
    }

    double result;
    switch (what)
    {
        case 0:
            printf("0. case %d\n", what);
            printf("Goodbye\n");
            exit(0);
            break;
        case 1:
            printf("1. case %d\n", what);
            result = num * IN2CM;
            printf("%lf IN = %lf CM\n", num, result);
            break;
        case 2:
            printf("2. case %d\n", what);
            result = num * YD2MT;
            printf("%lf YD = %lf M.\n", num, result);
            break;
        case 3:
            printf("3. case %d\n", what);
            result = num * MI2KM;
            printf("%lf MI = %lf KM\n", num, result);
            break;
        case 4:
            printf("4. case %d\n", what);
            result = num * CM2IN;
            printf("%lf CM = %lf IN\n", num, result);
            break;
        case 5:
            printf("5. case %d\n", what);
            result = num * MT2YD;
            printf("%lf M = %lf YD\n", num, result);
            break;
        case 6:
            printf("6. case %d\n", what);
            result = num * KM2MI;
            printf("%lf KM = %lf MI\n", num, result);
            break;
        case 7:
            printf("7. case %d\n", what);
            result = CIRCAREA(num);
            printf("Circle area with radius of %lf is %lf\n", num, result);
            break;
        case 8:
            printf("8. case %d\n", what);
            result = CIRCCUMF(num);
            printf("Circle circumference with radius of %lf is %lf\n", num, result);
            break;
        case 9:
            printf("9. case %d\n", what);
            result = SPHVOL(num);
            printf("Sphere volume with radius of %lf is %lf\n", num, result);
            break;

    }
    return 0;
}

//user defined functions
int print_xface()
{
    printf("Enter your choice at the prompt. \n");
    printf("    Enter 0 to exit\n");
    printf("    Enter 1 to convert inches to centimeters\n");
    printf("    Enter 2 to convert yards to meters\n");
    printf("    Enter 3 to convert miles to kilometers\n");
    printf("    Enter 4 to convert centimeters to inches\n");
    printf("    Enter 5 to convert meters to yards\n");
    printf("    Enter 6 to convert kilometers to miles\n");
    printf("    Enter 7 to calculate area of circle\n");
    printf("    Enter 8 to calculate circumference of circle\n");
    printf("    Enter 9 to callculate volume of sphere\n");
    printf("Enter your choice:  ");
    int what;
    scanf("%d", &what);
    return what;
}

double get_num()
{
    printf("Enter your (positive) number \n");
    double n; 
    scanf("%lf", &n);
    return n;
}
