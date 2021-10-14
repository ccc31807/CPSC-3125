//gcc thread_create_with_return_args.c -o thread_create_with_return_args.exe -Wall -pthread

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "common_threads.h"

typedef struct 
{
    int a;
    int b;
} myarg_t;

typedef struct 
{
    int x;
    int y;
} myret_t;

void *mythread(void *arg) 
{
    myarg_t *args = (myarg_t *) arg;
    printf("args %d %d\n", args->a, args->b);
    myret_t *rvals = malloc(sizeof(myret_t));
    assert(rvals != NULL);
    rvals->x = 1;
    rvals->y = 2;
    return (void *) rvals;
}

int main(int argc, char *argv[]) 
{
    pthread_t p;
    myret_t *rvals;
    myarg_t args = { 10, 20 }; // initializes a to 10 and b to 20
    Pthread_create(&p, NULL, mythread, &args);
    Pthread_join(p, (void **) &rvals);
    printf("returned %d %d\n", rvals->x, rvals->y);
    printf("address of args is %p, and address of myret_t is %p\n", &args, rvals);
    free(rvals);
    return 0;
}

