#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return : always 0.
 */

void print_alphabet(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
