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

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
