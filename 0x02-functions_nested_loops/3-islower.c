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
	if ( c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
