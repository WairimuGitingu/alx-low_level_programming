#include <stdio.h>
#include <ctype.h>

/**
 * main - initialize entry point
 * declaration - print out every letter 
 *
 * Return:0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');
	return (0);
}
