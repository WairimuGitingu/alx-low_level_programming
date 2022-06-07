#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return : always 0.
 */

void print_alphabet_x10(void);
int main(void)
{
	print_alphabet();
	return (0);
}
{
	int alphabets;

	for (alphabets = 'a', alphabets <= 'z', alphabets++)
	{
		putchar(alphabets);
	}
	puchar('\n');
}
