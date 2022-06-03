#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print alphabets in reverse
 *
 * Return:0
 *
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
