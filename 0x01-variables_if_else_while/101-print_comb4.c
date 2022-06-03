#include <stdio.h>

/**
 * main - initialize entry point
 * declaration : 3 digit combinations
 *
 * Result:0
 */

int main(void)
{
	int a,b,c;

	a = -1;
	while (++a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			
			}
		}
	}
	putchar('\n');
	return (0);
}
