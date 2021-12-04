/***************************************
 * Name: prog35.c
 * Author: Charles Carter
 * Date: July 28, 2021
 * Purpose: opening files, reading and writing
***************************************/

//includes
#include <stdio.h>

//variable and function declarations

//main function
int main(int argc, char *argv[])
{
    printf("opening and closing files, writing to and reading  from file, prog35.c\n");



    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    // get file names from user
    printf ("Enter name of file to be copied: ");
    scanf ("%63s", inName);
    printf ("Enter name of output file: ");
    scanf ("%63s", outName);

    // open input and output files
    if ( (in = fopen (inName, "r")) == NULL ) {
    printf ("Can't open %s for reading.\n", inName);
    return 1;
    }
    if ( (out = fopen (outName, "w")) == NULL ) {
    printf ("Can't open %s for writing.\n", outName);
    return 2;
    }

    // copy in to out
    while ( (c = getc (in)) != EOF )
    putc (c, out);

    // Close open files
    fclose (in);
    fclose (out);
    printf ("File has been copied.\n");

    return 0;
}

//user defined functions

