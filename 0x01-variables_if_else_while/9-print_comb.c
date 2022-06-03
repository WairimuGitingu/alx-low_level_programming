#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print out all combinations
 *
 * Return:0
 */

int main(void)
{
	int num;

	num = -1;
	while (++num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
