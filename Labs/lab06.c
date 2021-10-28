/***********************************************
 * Name: linked_list_lab.c
 * Author: C data structures
 * October 23, 2021
 * Purpose: Write a program to create a linked list and perform insertions and deletions of all cases.
 * Write functions to sort and finally delete the entire list at once.
 * Compile with: gcc linked_list_lab.c -o linked_list_lab.exe -Wall
 * Compile with: gcc lab06.c -o lab06.exe -Wall
 * *********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;

//variable declarations 
//static variables
int option;
Node *start = NULL;

//function declarations
int menu();
void dowhat(int);

Node *create_ll(Node *);
Node *display(Node *);
Node *insert_beg(Node *);
Node *insert_end(Node *);
Node *insert_before(Node *);
Node *insert_after(Node *);

int main()
{
    system("clear");
    do
    {
        option = menu();
        printf("start = %p\n", start);
        dowhat(option);
    }
    while(option != 13);

    return 0;
}

int menu()
{
    printf("\n\n *****MAIN MENU *****");
    printf("\n 1: Create a list");
    printf("\n 2: Display the list");
    printf("\n 3: Add a node at the beginning");
    printf("\n 4: Add a node at the end");
    printf("\n 5: Add a node before a given node");
    printf("\n 6: Add a node after a given node");
    printf("\n 13: EXIT");
    int option;
    printf("\n\n Enter your option:  ");
    scanf("%d", &option);

    return option;
}

void dowhat(int option)
{
    switch(option)
    {
        case 1: start = create_ll(start);
            printf("\n LINKED LIST CREATED");
            break;
        case 2: start = display(start);
            break;
        case 3: start = insert_beg(start);
            break;
        case 4: start = insert_end(start);
            break;
        case 5: start = insert_before(start);
            break;
        case 6: start = insert_after(start);
            break;
    }
}

Node *create_ll(Node *start)
{
    Node *new_node, *ptr;
    int num;
    printf(" Enter the data  (-1 to end): ");
    scanf("%d", &num);
    while(num != -1)
    {
        new_node = (Node*)malloc(sizeof(Node));
        new_node->data = num;
        if(start==NULL)
        {
            //printf("if branch, start == NULL\n");
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            //printf("else branch, start == %p\n", start);
            ptr = start;
            while(ptr->next!=NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf(" Enter the data:  ");
        scanf("%d", &num);
    }
    return start;
}

Node *display(Node *start)
{
    Node *ptr;
    ptr = start;
    printf("\nLinked List ------------------------------\n");
    printf(" - start->%p\n", start);
    while(ptr != NULL)
    {
        printf(" - %d@%p->%p\n", ptr->data, ptr, ptr->next);
        ptr = ptr->next;
    }
    printf("\n------------------------------------------\n");
    return start;
}




/****************************************************
 *
 * students will implement the four functions defined below
 *
 * **************************************************/





Node *insert_beg(Node *start)
{
}

Node *insert_end(Node *start)
{
}

Node *insert_before(Node *start)
{
}

Node *insert_after(Node *start)
{
}
