#include <stdio.h>

/**
 * main - initializes entry point
 * declaration : print out single digits
 *
 * Result:0
 */

int main(void) /*returns void; int to be returned*/
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
