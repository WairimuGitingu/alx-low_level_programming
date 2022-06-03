#include <stdio.h>
/**
 * main - initialize entry point
 * declaration : print out digits with putchar
 *
 * Result:0
 */

int main(void)
{
	int n;

	n=-1;
	while ( n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
