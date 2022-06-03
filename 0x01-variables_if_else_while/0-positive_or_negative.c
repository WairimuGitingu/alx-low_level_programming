#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRINT_SIGN(n) (n < 0 ? printf(%d is negative\n", n) : n == 0 ? \ printf("%d is zero\n", n) : printf("%d is positive\n", n))

/**
 * main - initializes entry point
 * description: uses macros to determine right condition
 *
 *Return:0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
