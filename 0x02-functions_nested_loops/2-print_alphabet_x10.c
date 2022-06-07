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

	while (alphabets <= 'z')
	{
		while (b <=10)
		{
			_putchar(alphabets);
			b++;
		}
		_putchar('\n');
	}
}
