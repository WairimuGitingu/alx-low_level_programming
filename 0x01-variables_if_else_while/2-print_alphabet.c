#include <stdio.h>
#include <ctype.h>

/**
 * main - initializes entry point
 * declaration: prints alphabets in lowercase
 *
 * Return:0
 */

int main(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z', alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

