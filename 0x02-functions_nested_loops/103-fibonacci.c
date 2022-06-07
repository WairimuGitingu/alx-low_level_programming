#include <stdio.h>
#include "main.h"

/**
 * fibonacci_sum - adds values
 * @n : integer
 * declaration : add sum of even numbers of fibonacci
 *
 * Return: void
 */

void fibonacci_sum(int n)
{
	int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 2;

	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		if (b > n)
			break;
		if (!(b % 2))
			sum = sum + b;
	}
	printf("%d\n", sum);
}
/**
 * main - calls fibanacci
 *@void : void
 *declaration : calls function
 *Return:0
 */

int main(void)
{
	fibonacci_sum(4000000);
	return (0);
}
