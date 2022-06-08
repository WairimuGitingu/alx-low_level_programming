#include <stdio.h>
#include "main.h"

/**
 * print_spaces - prints spaces
 * @num : integer
 * declaration : print out multiples
 *
 * Return : num
 */

void print_spaces(int num)
{
	int a, b;

	if (num < 10)
	{
		b = 3;
	}
	else if (num > 9 && num < 100)
	{
		b = 2;
	}
	else
	{
		b = 1;
	}
	for (a = 0; a < b; a++)
	{
		_putchar(' ');
	}
}

/*
 * print_num - prints number
 * @num: integer
 * declaration : prints out number repeatedly
 *
 * Return:num
 */
void print_num(int num)
{
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else if (num > 9)
	{
		print_num(num / 10);
		print_num(num % 10);
	}
}

/*
 * print_times_table - prints out the times tables
 * @n: int
 * declaration : print out all multiples from 0 to n number of times
 *
 * Return:n
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n > -1 && n < 16)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				c = a * b;
				print_num(c);
				if (b == n)
					break;
				_putchar(',');
				print_spaces(c + a);
			}
			_putchar('\n');
		}
	}
}
