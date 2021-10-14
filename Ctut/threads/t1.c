/*********************************
 * compile with: gcc t1.c -o t1.exe -Wall -pthread
 * run with one arg for loop count
 * ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "common.h"
#include "common_threads.h"

int max;
volatile int counter = 0; // shared global variable

void *mythread(void *arg) 
{
    char *letter = arg;
    int i; // stack (private per thread) 
    printf("%s: begin [addr of i: %p]\n", letter, &i);
    for (i = 0; i < max; i++) 
        counter = counter + 1; // shared: only one
    
    printf("%s: done, end address is %p\n", letter, &i);
    return NULL;
}
                                                                             
int main(int argc, char *argv[]) {                    
    if (argc != 2) 
    {
        fprintf(stderr, "usage: main-first <loopcount>\n");
        exit(1);
    }
    max = atoi(argv[1]);

    pthread_t p1, p2;
    //printf("main: begin [counter = %d] [%x]\n", counter, (unsigned int) &counter);
    printf("size of counter is %ld, size of pointer to counter is %ld, address of counter is (%lx - %p\n", 
            sizeof(counter), sizeof(&counter), (long unsigned int)&counter, &counter);
    printf("main: begin [counter = %d] (address is: %lx - %p)\n", counter, (long unsigned int) &counter,  &counter);
    Pthread_create(&p1, NULL, mythread, "thread A"); 
    Pthread_create(&p2, NULL, mythread, "thread B");
    // join waits for the threads to finish
    Pthread_join(p1, NULL); 
    Pthread_join(p2, NULL); 
    printf("main: done\n [counter: %d]\n [should: %d]\n", counter, max*2);
    return 0;
}

