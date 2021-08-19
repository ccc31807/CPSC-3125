/*
 * program_09_06.c - Reading Lines of Data
 */
#include <stdio.h>

int main (void)
{
	int i;
	char line[81];
	void readLine (char buffer[]);

	for ( i = 0; i < 3; ++i )
	{
		readLine (line);
		printf ("You entered [%s]\n\n", line);
	}

	return 0;
}

/*
 * Function to read a line of text from the terminal.
 */
void readLine (char buffer[])
{
    printf("Please enter a line of text: \n");
	char character;
	int i = 0;

	do
	{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );

	buffer[i - 1] = '\0';
}
