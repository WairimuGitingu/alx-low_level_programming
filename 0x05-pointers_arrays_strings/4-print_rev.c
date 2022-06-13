#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints in reverse
 * @s: char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
