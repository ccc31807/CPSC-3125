/***************************************
 * Name: prog13.c
 * Author: Charles Carter
 * Date: July 21, 2021
 * Purpose: illustrate calling functions with array args
***************************************/

//includes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define LEN 20

//variable and function declarations
int *getArray();
int max(int len, int *array);
int min(int len, int *array);
int sum(int len, int *array);

//main function
int main(int argc, char *argv[])
{
    printf("Program 11, passing and returning arrays from functions.c\n");

    printf("\nInitialize, declare, and print an array of twenty random integers to 1000\n");
    int *myArray = getArray();
    for(int i = 0; i < LEN; i++)
        printf("%d ", myArray[i]);
    printf("\n");

    int x = max(LEN, myArray);
    printf("max is %d\n", x);

    int y = min(LEN, myArray);
    printf("min is %d\n", y);

    int z = sum(LEN, myArray);
    printf("sum is %d\n", z);

    return 0;
}

//user defined functions
int *getArray()
{
    //const int LEN = 20;
    static int arr[LEN];
    srand( (unsigned)time( NULL ) );
    for(int i = 0; i < LEN; i++)
    {
        arr[i] = rand() % 1000;
    }

    return arr;
}

int max(int len, int *array)
{
    printf("    calling max()\n");
    int rv = INT_MIN;
    for(int i = 1; i < len; i++)
    {
        if(array[i] > rv)
            rv = array[i];
    }
    return rv;
}

int min(int len, int *array)
{
    printf("    calling min()\n");
    int rv = INT_MAX;
    for(int i = 1; i < len; i++)
    {
        if(array[i] < rv)
            rv = array[i];
    }
    return rv;
}

int sum(int len, int *array)
{
    printf("    calling sum()\n");
    int rv = 0;
    for(int i = 1; i < len; i++)
        rv += array[i];
    return rv;
}
