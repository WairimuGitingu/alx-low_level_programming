#include "main.h"

/**
 * _strspn - gets the length of a prefic substring
 * @s: string to look into
 * @accept: string with the characters
 *
 * Return:length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	unsigned int length;

	for (x = 0; s[x] != '\0'; x++)
	{
		length = 1;
		for (y = 0; accept[j] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				length = 0;
				break;
			}

		}
		if (length == 1)
			break;
	}
	return (x);
}
