#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_i - prints integer
 * @list: list of int
 * @s: separator
 * Return: nothing
 */
void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}
/**
 * print_c- print char
 * @list: list of char
 * @s: separator
 * Return: nothing
 */
void print_c(va_list list, char *s)
{
	printf("%s%c", s, va_arg(list, int));
}
/**
 * print_s - print string
 * @list: list of strings
 * @s: separator
 * Retuen: nothing
 */
void print_s(va_list list, char *s)
{
	char *i;

	i = va_arg(list, char *);
	if (i == NULL)
		i = "(nil)";
	printf("%s%s", s, i);
}
/**
 * print_f: prints float
 * @s: float to print
 * @list : list of floats
 * Return: nothing
 */
void print_f(va_list list, char *s)
{
	printf("%s%f", s, va_arg(list, double));
}
/**
 * print_all - prints everything
 * @format: list ofall types of args
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep;
	int i, j;
	typ_t fm[] = {
		{
			{"c", print_c},
			{"i", print_i},
			{"f", print_f},
			{"s", print_s},
			{NULL, NULL}
		};
		va_start(list, format);
		i = 0;
		sep ="";
		while (format != NULL && format[i] != '\0')
		{
			j = 0;
			
			while(j < 4)
			{
				if (format[i] == *(fm[j]).fm)
				{
					fm[j].p(list, sep);
					sep = ", ";
				}
				j++;
			}
			i++;
		}
	printf("\n");
	va_end(list);
}
