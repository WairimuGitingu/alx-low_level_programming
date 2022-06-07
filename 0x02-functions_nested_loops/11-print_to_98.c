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
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
