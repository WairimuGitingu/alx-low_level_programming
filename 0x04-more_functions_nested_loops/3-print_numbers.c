#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints out from 0 to 9
 * @void: void
 *description : print out from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
}