#include <stdio.h>
#include "main.h"

/**
 * print_sign : return sign
 * @n: int
 *description : return sign according to condition
 *Return:+ if positive, 0 if zero and - if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
