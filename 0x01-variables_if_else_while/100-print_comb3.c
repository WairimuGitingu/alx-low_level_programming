#include <stdio.h>

/**
 * main - initializes entry
 * declaration : print all combinations
 *
 * Return:0
 */

int main(void)
{
	int a, b;

	a = -1;
	while (++a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a == 8 && b == 9)
				break;
			putchar(',');
			putchar(' ');
			b++;
		}
	}
	putchar('\n');
	return (0);
}
