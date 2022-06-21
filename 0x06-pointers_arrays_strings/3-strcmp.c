#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: char
 * @s2: char
 *
 * Return:0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept -1))
			{
				c++;
				break;
			}
			if (!(*--accept))
				break;
			accept = t;
		}
		return (c);
	}
}
