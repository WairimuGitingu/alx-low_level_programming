#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *_puts - prints out a string
 *@str: string to be printed out
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while ((str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
