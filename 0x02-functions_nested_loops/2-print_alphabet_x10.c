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
	int b = 1;

	while (b <= 10)
	{
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		b++;
	}
	_putchar('\n');
}
