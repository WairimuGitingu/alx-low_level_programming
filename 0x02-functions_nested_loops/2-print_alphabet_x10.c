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
	int b = 0;

	for (int b <= 10)
	{
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			_putchar('\n');
			alphabets++;
		}
		b++;
	}
}
