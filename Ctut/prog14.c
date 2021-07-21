/**************************************
 * Name: prog14.c
 * Author: Charles Carter
 * Date: July 21, 2021
 * Purpose: functions, recursion
***************************************/

//includes
#include <stdio.h>

//variable and function declarations
int getNum();
int mul(int prod, int lhs, int rhs);
long int mypow(int power, int base, int expt);
long int fac(long int r, int n);
long int fib(long int r, int n1, int count, int end);

//main function
int main(int argc, char *argv[])
{
    printf("Program 14, recursive functions\n");

    printf("Testing mul(lhs, rhs), enter TWO integers.\n");
    int lhs = getNum();
    int rhs = getNum();
    int product = mul(0, lhs, rhs);
    printf("Product is %d\n", product);

    printf("Testing mypow(base, expt), enter TWO integers.\n");
    int base = getNum();
    int expt = getNum();
    long int power = mypow(1, base, expt);
    printf("Power is %ld\n", power);


    printf("Testing factorial ... \n");
    int x = getNum();
    long int factorial = fac(1, x);
    printf("Factorial is %ld\n", factorial);

    printf("Testing fibonacci ... \n");
    int y = getNum();
    long int fibonacci = fib(0, 1, 0, y);
    printf("Fibonacci is %ld\n", fibonacci);

    return 0;
}

//user defined functions
int mul(int prod, int lhs, int rhs)
{
    printf("    mul(%d, %d, %d)\n", prod, lhs, rhs);
    if(rhs == 0)
        return prod;
    else
        return mul(prod + lhs, lhs, rhs - 1);
}

long int mypow(int power, int base, int expt)
{
    printf("    mypow(%d, %d, %d)\n", power, base, expt);
    if(expt  == 0)
        return power;
    else
        return mypow(power * base, base, expt - 1);
}

int getNum()
{
    printf("Please enter a positive integer: ");
    int num = 0;
    scanf("%d", &num);
    return num;
}

long int fac(long int r, int n)
{
    printf("    fac(%ld, %d)\n", r, n);
    if (n == 0)
        return r;
    else
        return fac(r * n, n - 1);
}

long int fib(long int r, int n1, int count, int end)
{
    printf("    fib(%ld, %d, %d, %d)\n", r, n1, count, end);
    if (count == end)
        return r;
    else
        return fib(r + n1, r, count + 1, end);
        //return 666;
}
