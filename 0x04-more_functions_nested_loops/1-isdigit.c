#include "main.h"

/**
 * _isdigit - checks whether character is a digit
 * @c: integer
 * description : checks if character is aninteger
 *
 * Return:c
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
