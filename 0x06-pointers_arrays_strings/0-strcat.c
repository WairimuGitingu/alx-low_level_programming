#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: char
 * @src: char
 *
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (dest[i] != '\0')
			{
				_putchar(dest[i]);
				_putchar(src[j]);
			}
			_putchar('\0');
		}
	}
	_putchar('\n');
	return (dest);
}
