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
	int len[400];
	int i;

	while (*(s + len[i]) != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
