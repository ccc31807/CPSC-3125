/***************************************
 * Name: prog07.c
 * Author: Charles Carter
 * Date: July 19, 2021
 * Purpose: arithmetic ops with switch
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    printf("Arithmetic operations with switch\n");

    int lhs, rhs;
    char op;
    double result;

    while(true)
    {
        printf("Enter a positive integer for the left hand side: ");
        scanf("%d", &lhs);
        printf("Enter a positive integer for the right hand side: ");
        scanf("%d", &rhs);
        printf("Enter an operation or Q to exit: [+, -, *, /, %%] ");
        scanf(" %c", &op);

        switch (op)
        {
            case '+':
                result = lhs + rhs;
                break;
            case '-':
                result = lhs - rhs;
                break;
            case '*':
                result = lhs * rhs;
                break;
            case '/':
                result = (double) lhs / rhs;
                break;
            case '%':
                result = lhs % rhs;
                break;
            case 'q':
            case 'Q':
                printf("\nGoodbye");
                exit(0);
            default:
                printf("\nSorry, I didn't understand.\n");
        }
        printf("%d %c %d = %lf.\n", lhs, op, rhs, result);
        printf("The result is %lf.\n", result);
    }

    return 0;
}

