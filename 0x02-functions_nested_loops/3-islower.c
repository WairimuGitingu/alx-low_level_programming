#include <stdio.h>
#include "main.h"

/**
 * _islower - function name
 * description : checks if it slower
 *
 * Return: int
 */

int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
