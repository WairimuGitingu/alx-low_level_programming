#include "main.h"

/**
 * _isupper - returns 1 if upper and 0 if lower
 * @c: integer
 *
 * description: returns 1 if upper case and 0 if lower case
 * Return:1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
