/***************************************
 * Name: template.c
 * Author: Charles Carter
 * Date: July 31, 2021
 * Purpose: investigate dynamic memory allocation
***************************************/

//includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//variable and function declarations
void declare_and_initialize_pointer();
void buffer_overflow();
void memory_leak();
void lost_pointer();
void dangling_pointer();

//main function
int main(int argc, char *argv[])
{
    printf("Explore dynamic memory allocation, prog42.c\n");

    declare_and_initialize_pointer();
    buffer_overflow();
    //causes program to crash
    //memory_leak();
    lost_pointer();
    dangling_pointer();

    return 0;
}

//user defined functions
void declare_and_initialize_pointer()
{
    printf("\tCalling declare_and_initialize_pointer()\n");
    int *pi = (int*) malloc(sizeof(int));
    if(pi == NULL)
    {
        printf("malloc pi failed, exiting\n");
        exit(1);
    }
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);
}

void buffer_overflow()
{
    printf("\tCalling buffer_overflow()\n");
    //allocates space for 6 characters
    char *pc = (char*) malloc(6);
    if(pc == NULL)
    {
        printf("malloc pc failed, exiting\n");
        exit(1);
    }
    printf("look at what memory holds\n");
    for(int i=0; i<6; i++) 
        printf("%d ", pc[i]);
    printf("\n");
    printf("writes 10 characters, buffer overflow\n");
    for(int i=0; i<10; i++) 
        pc[i] = 0;
    printf("now, look at what memory holds\n");
    for(int i=0; i<10; i++) 
        printf("%d ", pc[i]);
    printf("\n");
    free(pc);
}

void memory_leak()
{
    printf("\tCalling memory_leak()\n");
    char *chunk;
    while (1) 
    {
        chunk = (char*) malloc(1000000);
        printf("Allocating, contents of chunk: %s\n", chunk);
    }
}

void lost_pointer()
{
    printf("\tCalling lost_pointer()\n");
    int *pi = (int*) malloc(sizeof(int));
    if(pi == NULL)
    {
        printf("malloc pi failed, exiting\n");
        exit(1);
    }
    *pi = 5;
    printf("*pi: %d, address of pi: %p\n", *pi, pi);
    char *warning = "About to lose memory address\n";
    int len = strlen(warning);
    printf("size of warning: %d\n", len);
    for(int i = 0; i < len; i++)
        printf("%c", warning[i]);
    //oops, just lost address of pi, memory allocted but no way to reach it
    *pi = (int*) malloc(sizeof(int));
    *pi = 666;
    printf("*pi: %d, address of pi: %p\n", *pi, pi);
    free(pi);
}

void dangling_pointer()
{
    printf("\tCalling dangling_pointer()\n");
    int *pi = (int*) malloc(sizeof(int));
    if(pi == NULL)
    {
        printf("malloc pi failed, exiting\n");
        exit(1);
    }
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);
    printf("What does the pointer point to after it's been freed?\n");
    printf("*pi: %d\n", *pi);
}
