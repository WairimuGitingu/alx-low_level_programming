#include "main.h"

/**
 * print_most_numbers - print numbers
 * @void : void
 *
 * Return:0
 */

void print_most_numbers(void)
{
	char c;

	for (c  = 0; c <= 10; c++)
	{
		while (c != 2 && c != 4)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
