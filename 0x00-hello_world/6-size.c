#include <stdio.h>

/**
 * main - initialize entry point
 *description - print out size of data types
 *types: char, int, long int, long long, float
 *Return:0
 */

int main(void)
{
	printf("size of char is: %zu bytes.\n", sizeof(char));
	printf("size of int is: %zu bytes.\n", sizeof(int));
	printf("size of long int: %zu bytes.\n", sizeof(long int));
	printf("size of long long: %zu bytes.\n", sizeof(long long));
	printf("size of float is: %zu bytes.\n", sizeof(float));
	return (0);
}
