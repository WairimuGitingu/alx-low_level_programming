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
		if (num < 9)
		{
			putchar(num + '0');
			putchar(' ');
			putchar(',');
		}
		else
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}
