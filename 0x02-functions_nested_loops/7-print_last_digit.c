#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints out last digit 
 * @a: integer
 *
 * description : prints out the last digit of a value
 *Return: a
 */

int print_last_digit(int a)
{
	a = a % 10;
	return (a);
}
