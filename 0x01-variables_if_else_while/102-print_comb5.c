#include <stdio.h>

/**
 * main - all possible two combinations
 * declaration : print all two possibles
 *
 * Return:0
 */

int main(void)
{
	int a, b;

	a = -1;
	while (++a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (a == 98 && b == 99)
				break;
			putchar(',');
			putchar(' ');
			b++;
		}
	}
	putchar('\n');
	return (0);
}
