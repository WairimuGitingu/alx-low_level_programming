#include <stdio.h>

/**
 * main - entry point
 * @void:0
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
