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
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{		
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			if (accept[j] == '\0')
				break;
		}
	return (length);
}
