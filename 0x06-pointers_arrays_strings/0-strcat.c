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
	char dest1, src1;

	dest = dest1;
	sec = src1;
	for (i = 0; dest[i] != '\0'; i++)
	{
		++dest;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*dest = *src;
		dest++;
		src++
	}
	return (dest);
}
