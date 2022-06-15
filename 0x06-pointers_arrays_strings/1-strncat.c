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
			src[n] = src[j];
			dest[i] = src[n];
			n++;
			i++;
		}
	return (dest);
}
