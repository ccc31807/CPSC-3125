/***************************************
 * Name: prog15.c
 * Author: Charles Carter
 * Date: July 22, 2021
 * Purpose: string manipulation palindrome
***************************************/

//includes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//variable and function declarations
char inputString[81];
char is[81];
char * getInput(); 
void printString(const char *s);
int palindrome(const char *s);
char *cleanString(char *s, int l);

//main function
int main(int argc, char *argv[])
{
    printf("Finding palindrome, string manipulation.c\n");
    gets(inputString);
    printf("You entered [%s]\n", inputString);
    int len = strlen(inputString);
    printf("You entered [%s], and the length is %d\n", inputString, len);
    char *clean = cleanString(inputString, len);
    printf("The cleaned string is [%s]\n", clean);
    bool isPal = palindrome(inputString);
    printf("Is a Palindrome? %s", isPal? "true" : "false");

    return 0;
}

//user defined functions
int palindrome(const char *s)
{
   int i,l;
   l = strlen(s);
   for(i=0; i<l/2; i++)
   {
     if ( s[i] != s[l-i-1] ) return 0; 
   }
   return 1;
}

char *cleanString(char *s, int l)
{
    printf("in cleanString( %s )\n", s);
    char r[l];
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        printf("%c . ", s[i]);
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            r[j] = s[i];
            j++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            r[j] = s[i];
            j++;
        }
        else
            ;
        i++;
    }

    //return "cleaned";
    return r;
}

char * getInput() 
{
    printf("Please enter a suspected palindrome: ");
    gets(is);
    printf("in function, you entered [%s]\n", is);
    //return is;
    return "in function, qwerty";
}   

void printString(const char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
}
