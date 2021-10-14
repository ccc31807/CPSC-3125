// gcc thread_create.c -o thread_create.exe -Wall -pthread


#include <assert.h>
#include <stdio.h>
#include <pthread.h>

typedef struct 
{
    int a;
    int b;
} myarg_t;

void *mythread(void *arg) 
{
    myarg_t *args = (myarg_t *) arg;
    printf("%d %d\n", args->a, args->b);
    printf("the address of the parameter arg is %p\n", arg);
    return NULL;
}

int main(int argc, char *argv[]) 
{
    pthread_t p;
    myarg_t args = { 10, 20 };
    printf("in main, the address of struct args is %p\n", &args);
    printf("the values of the struct are a: %d, and b: %d\n", args.a, args.b);
    int rc = pthread_create(&p, NULL, mythread, &args);
    assert(rc == 0);
    (void) pthread_join(p, NULL);
    printf("done\n");
    return 0;
}
