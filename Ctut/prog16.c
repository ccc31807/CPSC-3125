/***************************************
 * Name: prog16.c
 * Author: Charles Carter
 * Date: July 23, 2021
 * Purpose: to illustrate struct
***************************************/

//includes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//variable and function declarations
struct card {
    //const char face[10];
    //const char suit[10];
    const char *face;
    const char *suit;
};

typedef struct card Card;
    
void fillDeck(Card * const wDeck, const char *myFace[], const char *mySuit[]);
void shuffle(Card * const wDeck );
void deal(const Card * const wDeck );

//main function
int main(int argc, char *argv[])
{
    printf("prog16.c --- Cards, used to demonstrate struct\n");

    Card deck[52];
    const char *face[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };
    const char *suit[] = {"Clubs", "Diamonds", "Hearts", "Spaces" };
    
    srand(time(NULL));

    fillDeck(deck, face, suit);
    shuffle( deck );
    deal( deck );

    return 0;
}

//user defined functions

void fillDeck(Card * const wDeck, const char *myFace[], const char *mySuit[])
{
    for(int i = 0; i < 52; i++)
    {
        wDeck[i].face = myFace[i % 13];
        wDeck[i].suit = mySuit[i / 13];
    }
}

void shuffle(Card * const wDeck )
{
    Card temp;
    int r;

    for(int i = 0; i < 52; i++)
    {
        r = rand() % 52;
        temp = wDeck[i];
        wDeck[i] = wDeck[r];
        wDeck[r] = temp;
    }
}

void deal(const Card * const wDeck )
{ 
    const char *hand[] = {"North", "East", "South", "West"};
    for(int i = 0; i < 52; i++)
    {
        if (i % 13 == 0)
            printf("~~~~~~~~~ %s ~~~~~~~~~\n", hand[i / 13]);
        printf("%10s of %-10s\n", wDeck[i].face, wDeck[i].suit);
    }
}
