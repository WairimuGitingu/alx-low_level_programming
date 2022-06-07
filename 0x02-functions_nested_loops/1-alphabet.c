#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * declaration : print out alphabets in small letters
 *
 * Return:void
 */

void print_alphabet(void)
{
	alphabets = 'a';
	while (alphabets <= 'z')
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
