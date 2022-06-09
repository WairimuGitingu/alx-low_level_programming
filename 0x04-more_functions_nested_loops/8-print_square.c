#include <stdio.h>
#include "main.h"

/**
 * print_square - print out the values
 * @size: integer
 *
 * Return:0
 */

void print_square(int size);
{
	int i, j;

	if (size <= 0)
		_puchar('\n');
	for(i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}