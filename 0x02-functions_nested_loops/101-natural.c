#include <stdio.h>
#include "main.h"

/**
 * natural - computes and prints the sum of all the multiples of 3 and 5
 * @n: integer
 * description : compute and print the sum of multiples of 3 and 5
 * Return: n
 */

void natural(int n)
{
	unsigned int sum = 0;

	while (n--)
	{
		if (!(n % 3) || !(n % 5))
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - entry point
 * @void: void
 * description : calls 1024
 *
 * Return:0
 */

int main(void)
{
	natural(1024);
	return (0);
}
