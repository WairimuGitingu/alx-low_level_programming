#include "main.h"

/**
 * _strspn- returns length of matching characters
 * @s: string being scanned
 * @accept: chataers/ string being looked for
 *
 * Return:int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] == accept[j])
				length++;
			if (accept[j] == '\0')
				return (length);
		}
	}
	return (length);
}
