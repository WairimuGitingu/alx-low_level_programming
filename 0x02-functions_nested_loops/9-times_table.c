#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 * @void: void
 * description : print out multiples
 *
 * Return:void
 */

void times_table(void)
{
	int a,b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			a = a * b;
			_putchar(a);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

