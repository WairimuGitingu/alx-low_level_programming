#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print out hexadecimals using putchar
 *
 * Result:0
 */

int main(void)
{
	char *hexa_deximal = "0123456789abcdef";

	while (*hexa_decimal)
	{
		putchar(*hexa_decimal++);
	}
	putchar('\n');
	return (0);
}
