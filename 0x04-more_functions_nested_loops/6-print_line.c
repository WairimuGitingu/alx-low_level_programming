#include <stdio.h>
#include "main.h"

/**
 * print_line - prints out line with _
 * @n: integer
 * description : print out a line
 *
 * Return:0
 */

void print_line(int n)
{
	while (n++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
