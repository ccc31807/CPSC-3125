/******************************
 * Name: prog08.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to find whether a number is even or odd using functions.
 * ****************************/

#include <stdio.h>
#include <stdlib.h>

//function declaration, note that the name of the parameter is not required
int evenodd(int); 

int main(int argc, char* argv[])
{
    int num, flag;
    printf("Enter the number: ");
    scanf("%d", &num);
    //function call, note that the type of the parameter is not required
    flag = evenodd(num);

    if (flag == 1)
        printf("%d is EVEN\n", num);
    else
        printf("%d is ODD\n", num);

    return 0;
}

//function definition, note that both the type and the name of the parameter is required
int evenodd(int a)
{
    //printf("\ta mod 2 is %d but !(a mod 2) is %d\n", a % 2, !(a % 2));
    return !(a % 2);
}
