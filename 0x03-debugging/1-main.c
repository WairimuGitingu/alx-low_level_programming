#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incomin :(\n");

	i = 0;

	while (i < 10) /*i has been initialized to zero and no increment has been inpt and therefore it'll keep looping*/
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}	
