#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print out every number
 * @void: void
 *
 * return:0
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9);
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
