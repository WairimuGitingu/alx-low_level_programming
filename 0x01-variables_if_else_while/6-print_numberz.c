#include <stdio.h>

/**
 * main - initializes the entry point
 * declaration : print using putchar
 *
 * Result:0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
