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

/**
 * print_num - print the number
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

/**
 * print_times_table - print out n tables starting from 0
 * @n: int
 * declaration : print out all multiples from 0 to n number of times
 *
 * Return:n
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = b * a;
				if (b == 0)
					_putchar(c + '0');
				else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
