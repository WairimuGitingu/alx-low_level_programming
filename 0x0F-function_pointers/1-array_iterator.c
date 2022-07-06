#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: pointer to array
 * @size: size of elements
 * @action:pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL && action != NULL)
	{
			return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
