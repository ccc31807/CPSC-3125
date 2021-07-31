/***************************************
 * Name: prog41.c
 * Author: Charles Carter
 * Date: July 30, 20221
 * Purpose: introduction to pointers
***************************************/

//includes
#include <stdio.h>
#include <stdbool.h>

//variable and function declarations
void pointer_notation();
void size_of_pointers();
void declaring_pointers();
void displaying_pointers();
void pointer_addition();
void pointer_subtraction();
void pointer_difference();
void before_behind();
void pointer_indirection();

//main function
int main(int argc, char *argv[])
{
    printf("Introduction to pointers, prog41.c\n");

    pointer_notation();
    size_of_pointers();
    declaring_pointers();
    displaying_pointers();
    pointer_addition();
    pointer_subtraction();
    pointer_difference();
    before_behind();
    pointer_indirection();
    
    return 0;
}

//user defined functions
void pointer_notation()
{
    printf("\tcalling pointer_notation()\n");
    //declare and initialize a pointer to an array of character pointers
    char *names[] = {"Miller","Jones","Anderson"};
    //prints 'n', the third element "n" of the second element "Jones" of names
    printf("%c\n",names[1][2]);
    //same thing with alternate notation
    printf("%c\n",*(*(names+1)+2));
}

void size_of_pointers()
{
    printf("\tcalling size_of_pointers()\n");
    printf("Size of *char is %zu\n", sizeof(char *));
    printf("Size of char is %zu\n", sizeof(char));
    printf("Size of *short is %zu\n", sizeof(short *));
    printf("Size of short is %zu\n", sizeof(short));
    printf("Size of *int is %zu\n", sizeof(int *));
    printf("Size of int is %zu\n", sizeof(int));
    printf("Size of *long is %zu\n", sizeof(long *));
    printf("Size of long is %zu\n", sizeof(long));
    printf("Size of *float is %zu\n", sizeof(float *));
    printf("Size of float is %zu\n", sizeof(float));
    printf("Size of *double is %zu\n", sizeof(double *));
    printf("Size of double is %zu\n", sizeof(double));
    printf("Size of *bool is %zu\n", sizeof(bool *));
    printf("Size of bool is %zu\n", sizeof(bool));
}

void declaring_pointers()
{
    printf("\tcalling declaring_pointers()\n");
    int a = 5;
    int *aptr = &a;
    printf("a is %d and location of a is %ud\n", a, &a);
    printf("aptr is %zu and location of aptr is %ud, but references *aptr is %d\n", aptr, &aptr, *aptr);
}

void displaying_pointers()
{
    printf("\tcalling displaying_pointers()\n");
    int num = 0;
    int *pi = &num;
    printf("Address of num: %d, Value: %d\n",&num, num);
    printf("Address of pi as integer: %d, Value: %d\n",&pi, pi);
    printf("Address of pi as unsigned integer: %zu, Value: %zu\n",&pi, pi);
    printf("Address of pi as hexidecimal: %x, Value: %x\n",&pi, pi);
    printf("Address of pi as octal: %o, Value: %o\n",&pi, pi);
    printf("Address of pi: %p as pointer, Value: %p\n",&pi, pi);
}

void pointer_addition()
{
    printf("\tcalling pointer_addition()\n");
    int vector[] = {28, 41, 7};
    int *pi = vector; // pi: 100
    printf("%d\n",*pi); // Displays 28
    pi += 1; // pi: 104
    printf("%d\n",*pi); // Displays 41
    pi += 1; // pi: 108
    printf("%d\n",*pi); // Displays 7

    short s;
    short *ps = &s;
    char c;
    char *pc = &c;
    ps = ps + 1;
    printf("Content of ps before: %zu\n",ps);
    ps = ps + 1;
    printf("Content of ps after: %zu\n",ps);
    printf("Content of pc before: %zu\n",pc);
    pc = pc + 1;
    printf("Content of pc after: %zu\n",pc);
}

void pointer_subtraction()
{
    printf("\tcalling pointer_subtraction()\n");
    int vector[] = {28, 41, 7};
    int *pi = vector + 2; // pi: 108
    printf("%d\n",*pi); // Displays 7
    pi--; // pi: 104
    printf("%d\n",*pi); // Displays 41
    pi--; // pi: 100
    printf("%d\n",*pi); // Displays 28
}

void pointer_difference()
{
    printf("\tcalling pointer_difference()\n");
    int vector[] = {28, 41, 7};
    int *p0 = vector;
    int *p1 = vector+1;
    int *p2 = vector+2;
    printf("p2>p0: %d\n",p2>p0); // p2>p0: 1
    printf("p2<p0: %d\n",p2<p0); // p2<p0: 0
    printf("p0>p1: %d\n",p0>p1); // p0>p1: 0
    printf("p2 - p0: %d\n", p2-p0);
    printf("p1 - p0: %d\n", p1-p0);
    printf("p0 - p0: %d\n", p0-p0);
}

void before_behind()
{
    printf("\tcalling before_behind()\n");
    int vector[] = {28, 41, 7};
    printf("vector is %zu and *vector is %d\n", vector, *vector);
    printf("what is after vector? address is %zu and value is %d\n", vector + 3, *(vector + 3));
    printf("what is before vector? address is %zu and value is %d\n", vector - 1, *(vector - 1));
}

void pointer_indirection()
{
    printf("\tcalling pointer_indirection()\n");
char *titles[] = 
    {
        "A Tale of Two Cities",
        "Wuthering Heights",
        "Don Quixote",
        "Odyssey",
        "Moby-Dick",
        "Hamlet",
        "Gulliver's Travels"
    };

    char **bestBooks[3];
    char **englishBooks[4];

    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[3];
    bestBooks[2] = &titles[5];
    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];

    int sizeof_titles = sizeof(titles) / sizeof(char *);
    printf("size of titles is %d\n", sizeof_titles);
    for(int i = 0; i < sizeof_titles; i++)
        printf("\"%s\" ", titles[i]);
    printf("\n");

    int sizeof_bestBooks = sizeof(bestBooks) / sizeof(char *);
    printf("size of bestBooks is %d\n", sizeof_bestBooks);
    for(int i = 0; i < sizeof_bestBooks; i++)
        printf("\"%s\" ", *bestBooks[i]);
    printf("\n");

    int sizeof_englishBooks = sizeof(englishBooks) / sizeof(char *);
    printf("size of englishBooks is %d\n", sizeof_englishBooks);
    for(int i = 0; i < sizeof_englishBooks; i++)
        printf("\"%s\" ", *englishBooks[i]);
    printf("\n");
}
