#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to function that returns nothing
 *
 * Return: nothing
 */

void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && name != '\0' && f != NULL)
		f(name);
}
