/***************************************
 * Name: prog26.c
 * Author: Charles Carter
 * Date: 
 * Purpose: 
***************************************/

//includes
#include <stdio.h>

//variable and function declarations
unsigned int rotate (unsigned int value, int n);

//main function
int main(int argc, char *argv[])
{
    printf("Rotate function, prog26.c\n");

    unsigned int n1 = 0xabcdef00u, n2 = 0xffff1122u;
    unsigned int rotate (unsigned int value, int n);


    printf("original values as hex: %x, %x\n", n1, n2);
    printf ("n1 rotated left 8 places: %x\n", rotate (n1, 8));
    printf ("n1 rotated right 16 places: %x\n", rotate (n1, -16));
    printf ("n2 rotated left 4 places: %x\n", rotate (n2, 4));
    printf ("n2 rotated right 2 places: %x\n", rotate (n2, -2));
    printf ("n1 rotated left 0 places: %x\n", rotate (n1, 0));
    printf ("n1 rotated left 44 places: %x\n", rotate (n1, 44));

    return 0;
}

// Function to rotate an unsigned int left or right
unsigned int rotate (unsigned int value, int n)
{
    unsigned int result, bits;
    // scale down the shift count to a defined range
    if ( n > 0 )
        n = n % 32;
    else
        n = -(-n % 32);

    if ( n == 0 )
        result = value;
    else if ( n > 0 ) 
    { // left rotate
        bits = value >> (32 - n);
        result = value << n | bits;
    }
    else 
    { // right rotate
        n = -n;
        bits = value << (32 - n);
        result = value >> n | bits;
    }

    return result;
}

//user defined functions

