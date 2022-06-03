#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print digits
 *
 * Return:0
 */

int main(void)
{
	int num;

	num = -1;
	while (num++ < 10)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
