/*
 * program_09_05.c - Reading Strings with scanf()
 */

#include <stdio.h>

int main (void)
{
	char s1[81], s2[81], s3[81];

	printf ("Enter text separated by spaces like: [first] [second] [third]\n");

	scanf ("%s%s%s", s1, s2, s3);

	printf("\ns1 = %s\ns2 = %s\ns3 = %s", s1, s2, s3);

	return 0;
}
