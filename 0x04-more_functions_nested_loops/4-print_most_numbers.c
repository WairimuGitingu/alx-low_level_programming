#include "main.h"

/**
 * print_most_numbers - print numbers
 * @void : void
 *
 * Return:void
 */

void print_most_numbers(void)
{
	int c;

	for (c  = 0; c <= 9; c++)
	{
		while(c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
