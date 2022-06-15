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
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}
