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
	int a, b;;
	char dest1, src1;

	dest = dest1;
	src = src1;

	for (a = 0; dest1[a] != '\0'; a++)
		for (b = 0; src[1] != '\0'; b++)
		{
			*dest = *src;
			dest++;
			src++;
		}
}
