/***************************************
 * Name: prog04.c
 * Author: Charle Carter
 * Date: July 17, 2021
 * Purpose: variables and arithmetic operators
***************************************/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    printf("Variables and Arithmetic Operators\n");

    //define variables
    short int si = 6;
    unsigned short int usi = 9;
    int inum = -12;
    unsigned int ui = 15;
    long int li = -123456;
    unsigned long int uli = 234567;
    float fnum = 3.14159;
    double dnum = 2.718281828459045;
    long double ldnum = 1.618033988749895;
    char mychar = 'A';
    bool mybool = true;

    //print variables and sizes
    printf("\nPrinting values and size of variables:\n");
    printf("short int si = %i and size is %li \n", si,  sizeof(short int ));
    printf("unsigned short int usi = %i and size is %li \n", usi,  sizeof(unsigned short int ));
    printf("int inum = %i and size is %li \n", inum,  sizeof(inum ));
    printf("unsigned int ui = %i and size is %li \n", ui,  sizeof( ui));
    printf("long int li = %li and size is %li \n", li,  sizeof(li ));
    printf("unsigned long int uli = %li and size is %li \n", uli,  sizeof(uli ));
    printf("float fnum = %f and size is %li \n", fnum,  sizeof(fnum ));
    printf("double dnum = %f and size is %li \n", dnum,  sizeof(dnum ));
    printf("long double ldnum = %Lf and size is %li \n", ldnum,  sizeof(ldnum ));
    printf("char mychar = %c and size is %li \n", mychar,  sizeof( char));
    printf("bool mybool = %i and size is %li \n", mybool,  sizeof(bool ));

    //do arithmetic
    int lhs = 23;
    int rhs = 7;
    int sum = lhs + rhs;
    int diff = lhs - rhs;
    int prod = lhs * rhs;
    int div = lhs / rhs;
    double floatdiv = (double) lhs / rhs;
    int mod = lhs % rhs;

    //print arithmetic
    printf("\nPrinting results of arithmetic:\n");
    printf("sum is %i \n", sum);
    printf("diff is %i \n", diff);
    printf("prod is %i \n", prod);
    printf("div is %i \n", div);
    printf("floatdiv is %f \n", floatdiv);
    printf("mod is %i \n", mod);
    
    return 0;
}

