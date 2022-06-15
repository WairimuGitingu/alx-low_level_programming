#include "main.h"

/**
 * *_strncat -concatenates n number of bytes
 * @dest: char
 * @src: integer
 * @n: int
 *
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++)
		{
			if (j < n && src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
			}
		}
	dest[i] = '\0';
	return (dest);
}
