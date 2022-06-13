#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * swap_int -swaps rwo integers
 * @a: integer
 * @b: integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
