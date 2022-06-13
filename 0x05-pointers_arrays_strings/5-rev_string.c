#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: char
 *
 * Return:void
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;

	while (len >= 0)
	{
		len--;
	}
}
