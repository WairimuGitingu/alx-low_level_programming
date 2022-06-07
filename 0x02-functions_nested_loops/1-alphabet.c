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
	char arg = '`';
	while (++arg < '{')
	{
		_putchar(arg);
	}
	_putchar('\n');
}
