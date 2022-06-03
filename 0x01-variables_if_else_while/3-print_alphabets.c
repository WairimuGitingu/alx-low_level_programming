#include <stdio.h>
#include <ctype.h>

/**
 * main - initialize entry point
 * declaration : print upper and lower case
 *
 * Return:0
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'Z'; alphabets++)
	putchar(alphabets);
	putchar('\n');
	return (0);
}
