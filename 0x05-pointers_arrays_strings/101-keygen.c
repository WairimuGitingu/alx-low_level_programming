#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 * @void: void
 *
 * Return:0
 */

int main(void)
{
	int z = 0, x = 0;

	time_t t;

	srand((unsigned int) time(&t));
	while  (x < 2772)
	{
		z = rand() % 128;
		if ((x + z) > 2772)
			break;
		x = x + z;
		printf("%c", z);
	}
	printf("%c\n", (2772 - x));
	return (0);
}
