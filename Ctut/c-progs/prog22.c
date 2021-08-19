/***************************************
 * Name: prog22.c
 * Author: Charles Carter
 * Date: July 24, 2021
 * Purpose: pointers, first linked list exampe
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

//main function
int main(int argc, char *argv[])
{
    printf("First linked list example, prog22.c\n");

    struct listitem
    {
        double value;
        struct listitem *next;
    };

    //declare variables
    struct listitem li1, li2, li3, li4;
    struct listitem *ptr_li = &li1;

    //initialize values
    li1.value = 1.414213562;
    li2.value = 1.618033988;
    li3.value = 2.718281828;
    li4.value = 3.141592653;

    //initialize pointers
    li1.next = &li2;
    li2.next = &li3;
    li3.next = &li4;
    li4.next = (struct listitem *)0;

    printf("testing\n");
    printf(">>>ptr_li = %p\n", ptr_li);
    printf(">>>li1.next = %p\n", li1.next);
    printf(">>>li2.next = %p\n", li2.next);
    printf(">>>li3.next = %p\n", li3.next);
    printf(">>>li4.next = %p\n", li4.next);

    while(ptr_li != (struct listitem *)0)
    {
        printf("The value is %lf, the next pointer is %p, and the address is %p\n", ptr_li->value, ptr_li->next, ptr_li);
        ptr_li = ptr_li->next;
    }

    return 0;
}

//user defined functions

