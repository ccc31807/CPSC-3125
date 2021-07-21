/***************************************
 * Name: prog12.c
 * Author: Charles Carter
 * Date: July 21, 2021
 * Purpose: to illustrate functions
***************************************/

//includes
#include <stdio.h>
#include <stdbool.h>

//variable and function declarations
int getNum();
int abs(int n); 
bool isEven(int n);
int gcd(int i, int j);

//main function
int main(int argc, char *argv[])
{
    printf("Program 12, functions\n");

    printf("Exercising my getNjm() function.\n");
    printf("Your number is %d\n", getNum());

    printf("Exercising my abs() function. This should return the absolute value of an integer.\n");
    int x = getNum();
    printf("The absolute value is %i\n", abs(x));

    printf("Exercising my isEven() function. This should return true or false.\n");
    int y = getNum();
    printf("Is this number even? %s\n", isEven(y)? "true" : "false");

    printf("Exercising my gcd() function. Enter two integers. ");
    int num1 = getNum();
    int num2 = getNum();
    printf("The greatest common divisor is %d\n", gcd(num1, num2));


    return 0;
}

//user defined functions
int getNum()
{
    int n;
    printf("Please enter an integer: ");
    scanf("%i", &n);
    return n;
}

int abs(int n)
{
    if(n < 0)
        return n * -1;
    else
        return n;
}

bool isEven(int n)
{
    if(n % 2 == 0)
        return true;
    else
        return false;
}

int gcd(int i, int j)
{
    int temp = 0;
    while(j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}
