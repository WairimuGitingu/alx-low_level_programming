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
	str = "Hello"; /*useless value*/

	_putchar(*str);
	_putchar('\n');
}
