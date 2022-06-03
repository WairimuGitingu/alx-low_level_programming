#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : print out usintg putchar
 *
 * Result:0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num ++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
