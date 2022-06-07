#include <stdio.h>

/**
 * fibonacci - print out first 50 number of fibonacci
 * @n : integer
 * declaration : print out 50 numbers
 *
 * Return: n
 */

void fibonacci(int n)
{
	unsigned long a, b, c;

	a = 1;
	b = 2;
	c = 0;

	printf("1, 2, ");
	n = n - 2;
	while (n--)
	{
		printf("%lu", c = a + b);
		if (n)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
}

/**
 * main - calls fibonacci
 * @void: void
 * description : calls the fibonacci function
 *
 * Return: 0
 */

int main(void)
{
	fibonacci(50);
	return (0);
}
