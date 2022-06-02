#include <stdio.h>

/**
 * main - initialize entry point
 *description - print out size of data types
 *types: char, int, long int, long long, float
 *Return:0
 */

int main(void)
{
	printf("size a char: %zu byte(s)\n", sizeof(char));
	printf("size an int: %zu byte(s)\n", sizeof(int));
	printf("size a long int: %zu byte(s)\n", sizeof(long int));
	printf("size a long long: %zu byte(s)\n", sizeof(long long));
	printf("size a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
