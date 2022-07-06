#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterate - executes a function
 * @array: pointer to array
 * @size: size of elements
 * @action:pointer to function
 *
 * Return: nothing
 */

void array_iterate(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
