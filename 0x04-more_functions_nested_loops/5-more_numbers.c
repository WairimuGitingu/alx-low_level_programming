#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print out 0-14 ten times
 * @void: void
 * description : print out 0 to 14
 *
 * Return:void
 */

void more_numbers(void)
{
	int a;
	int b = 0;

	for (a = 1; a <= 10; a++)
	{
		while (b <= 14)
		{
			printf("%d", b);
			b++;
		}
		printf("\n");
	}
}
