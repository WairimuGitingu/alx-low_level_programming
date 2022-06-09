#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print all numbers between 0 and 9 except 2 and 4
 * @void: void
 * description print single digits except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		while (a != 2 && a != 4)
		{
			printf("%d", a);
		}
		printf("\n");
	}
}
