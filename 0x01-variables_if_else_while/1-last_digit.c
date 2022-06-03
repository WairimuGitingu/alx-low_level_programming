#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - initalize entry point
 * declaration: prints out last digit and the met condtion(s)
 *
 * Result:0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is grater than 5", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
