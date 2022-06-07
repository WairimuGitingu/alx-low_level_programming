#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print values to 98
 * @n: integer
 *declaration : print number before or after to 98
 *
 * Return:n
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
