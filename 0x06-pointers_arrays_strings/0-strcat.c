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
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		++dest;
	}
	for (b = 0; src[b] != '\0'; b++)
		{
			*dest = *src;
			dest++;
			src++;
		}
}
