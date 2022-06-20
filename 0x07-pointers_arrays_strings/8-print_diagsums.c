#include <stdio.h>

/**
 * print_diagsums- adds sum of two diagonals of a square matrix of integers
 * @a: int
 * @size: int
 *
 * Return:void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int l = 0;
	int sq = size * size;

	for (i = 0; i < sq; i = i + (size + 1))
	{
		c = c + a[i];
	}
	for (i = size - 1; i < sq - 1; i = i + (size - 1))
	{
		l = l + a[i];
	}
	printf("%d, %d\n", c, l);
}
