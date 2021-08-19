/***************************************
 * Name: prog33.c
 * Author: Charles Carter
 * Date: July 27, 2021
 * Purpose: demonstrate enums
***************************************/

//includes
#include <stdio.h>
#include <string.h>
#define DECK 52

//variable and function declarations
enum suit { clubs, diamonds, hearts, spades }; 
enum value { two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };
char *Suit[] = {"Clubs","Diamonds","Hearts","Spades" };
char *Values[] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
char  *deck[DECK];
char mycard[20];

//main function
int main(int argc, char *argv[])
{
    printf("prog33.c, enums\n");

    for(int s = clubs; s <= spades; s++)
    {
        printf("%d. %s\n", s, Suit[s]);
        for(int v = two; v <= ace; v++)
        {
            int idx = (s*13) + v;
            sprintf(mycard, "%s of %s", Values[v], Suit[s]);
            printf("    %d, %s, %d, --- %s\n", v, Values[v], idx, mycard);
            deck[idx] = strdup(mycard);
            //strcpy(deck[idx], mycard);
            printf("        %i. %s\n", idx, deck[idx]);
        }
    }; 

    for(int i = 0; i < DECK; i++) printf("%d. %s\n", i, deck[i]);
    return 0;
}

//user defined functions

