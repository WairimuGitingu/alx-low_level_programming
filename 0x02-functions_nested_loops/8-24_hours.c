#include <stdio.h>
#include "main.h"

/**
 * jack_bauer: print every minute
 * void: null
 * declaration : print out every minute
 * Return: null
 */

void jack_bauer(void)
{
	int a,b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar(a / 10);
			_putchar(a % 10);
			_putchar(':');
			_putchar(b / 10);
			_putchar(b % 10);
		}
	}
}
