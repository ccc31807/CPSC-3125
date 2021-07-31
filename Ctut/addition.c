/**********************************
 * Name: addition.c
 * Author: Charles Carter
 * Date: July 26, 2021
 * Purpose: this is a library file to test building and using C libraries
 * Instructions: compile with >>>gcc -c addition.c (-c flag says to compile but don't link)
***********************************/

int addition(int i, int j)
{
    int total;
    total = i + j;
    return total;
}

int multiplication(int i, int j)
{
    int total;
    total = i * j;
    return total;
}

int subtraction(int i, int j)
{
    int total;
    total = i - j;
    return total;
}

int modulus(int i, int j)
{
    int total;
    total = i % j;
    return total;
}

double division(int i, int j)
{
    double total;
    total = (double) i / (double) j;
    return total;
}
