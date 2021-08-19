/******************************
 * Name: prog07.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to determine whether a given number is a prime or a composite number.
 * ****************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int flag = 0, i, num;
    system("clear");
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=2; i < num/2; i++)
    {
        if(num%i == 0)
        {
            flag =1;
            break;
        }
    }
    if (flag == 1)
        printf("\n %d is a composite number", num);
    else
        printf("%d is a prime number\n", num);

    return 0;
}
