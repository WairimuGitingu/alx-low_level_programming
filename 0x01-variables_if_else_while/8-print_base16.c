#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print hexadecimals in char
 *
 * Return:0
 */

int main(void)
{
	char *hexa = "0123456789abcdef";

	while (*hexa)
	{
		putchar(*hexa++);
	}
	putchar('\n');
	return (0);
}
