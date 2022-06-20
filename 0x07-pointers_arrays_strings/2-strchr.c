#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: string to search
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
			i++;
		}
	}
	return (0);
}
