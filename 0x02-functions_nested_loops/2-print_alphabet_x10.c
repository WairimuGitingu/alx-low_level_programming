#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function name
 * declaration - print out alphabets 10 times
 *
 * Return : void
 */

void print_alphabet_x10(void)
{
	int alphabets = 'a';
	int b;

	for (b = 0; b <= 10; b++)
	{
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			_putchar('\n');
			alphabets++;
		}
	}
}
