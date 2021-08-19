/******************************
 * Name: prog04.c
 * Author: C data structures
 * Date August 19, 2021
 * Purpose: Write a program to determine whether the entered character is a vowel or not.
 * ****************************/

#include <stdio.h>

int main(int argc, char* argv[])
{
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
        case 'a':
            printf("\n %c is VOWEL", ch);
            break;
        case 'E':
        case 'e':
            printf("\n %c is VOWEL", ch);
            break;
        case 'I':
        case 'i':
            printf("\n %c is VOWEL", ch);
            break;
        case 'O':
        case 'o':
            printf("\n %c is VOWEL", ch);
            break;
        case 'U':
        case 'u':
            printf("\n %c is VOWEL", ch);
            break;
        default: 
            printf("\n %c is not a vowel", ch);
    }
    return 0;
}

