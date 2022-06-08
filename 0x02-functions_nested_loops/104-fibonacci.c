#include <stdio.h>
#include "main.h"

/**
 * print - prints out two integers
 * @a : integer
 * @b : integer
 * description :outputs two integers
 *
 * Return: void
 */

void print(unsigned long a, unsigned long b)
{
	static int i = 1;

	if (!a)
	{
		printf("%lu, ", b);
	}
	else
	{
		if (i == 98)
		{
			if (b < 10)
			{
				printf("%lu0%lu\n", a, b);
			}
			else
			{
				printf("%lu%lu\n", a, b);
			}
		}
		else
		{
			if (right < 10)
			{
				printf("%lu0%lu, ", a, b);
			}
			else
			{
				printf("%lu%lu, ", a, b);
			}
		}
	}
	i++;
}

/**
 * fibonacci - prints first n numbers
 * @n: integer
 * description : print first n fibonacci numbers
 *
 * Return: n
 */

void fibonacci(int n)
{
	unsigned long prev_half_a = 0;
	unsigned long prev_half_b = 0;
	unsigned long current_half_a = 0;
	unsigned long current_half_b = 0;
	unsigned long temp;
	unsigned long temp_a = 0;
	unsigned long temp_b = 0;
	int i;

	prev_half_b = 1;
	current_half_b = 2;
	print(prev_half_a, prev_half_b);
	print(current_half_a, current_half_b);

	for (i = 0; i < n - 2; i++)
	{

