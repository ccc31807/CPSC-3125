/***************************************
 * Name: prog11.c
 * Author: Charles Carter
 * Date: July 20, 2021
 * Purpose: integer arrays, implement bubble sort
***************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Integer Arrays, Bubble Sort\n");
    int max = RAND_MAX;
    printf("RAND_MAX = %d\n", max);

    printf("\nInitialize, declare, and print an array of ten integers from 1 to 10\n");
    //declare array
    int myarray[30];
    //initialize array
    for(int i = 0; i < 30; i++)
        myarray[i] = i + 1;
    //print array
    for(int i = 0; i < 30; i++)
        printf("%d ", myarray[i]);
    printf("\n");


    //randomize myarray
    printf("Randomize array of size 30\n");
    for(int i = 0; i < 30; i++)
        myarray[i] = rand() % 100;
    for(int i = 0; i < 30; i++)
        printf("%d ", myarray[i]);
    printf("\n");

    //sort myarray using bubble sort
    printf("Sort the array using bubble sort\n");
    int temp = 0; //used for swapping elements in array
    for(int i = 0; i < 29; i++)
    {
        for(int j  = (i + 1); j < 30; j++)
        {
            if(myarray[i] > myarray[j])
            {
                temp = myarray[j];
                myarray[j] = myarray[i];
                myarray[i] = temp;
            }
        }
    }
    for(int i = 0; i < 30; i++)
        printf("%d ", myarray[i]);
    printf("\n\n");
    

    printf("Declare and initialize character array containing my name\n");
    char name[] = {'C','h','a','r','l','e','s',' ','C','a','r','t','e','r'};
    size_t len = sizeof(name) / sizeof(char);
    printf("length of the name array is %ld\n", len);
    printf("Printing the name (which is an array of type char\n");
    for(int i = 0; i < len; i++)
        printf("%c", name[i]);
    printf("\n");
    printf("Sort the name using bubble sort\n");
    for(int i = 0; i < (len - 1); i++)
    {
        for(int j  = (i + 1); j < len; j++)
        {
            if(name[i] > name[j])
            {
                temp = name[j];
                name[j] = name[i];
                name[i] = temp;
            }
        }
    }
    for(int i = 0; i < len; i++)
        printf("%c", name[i]);
    printf("\n");

    return 0;
}

