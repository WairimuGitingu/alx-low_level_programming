#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: char
 * @s2: char
 *
 * Return:0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s1[j] !- '\0')
	{
		if (i == j)
		{
			return (0);
		}
		else if (i > j)
		{
			return (15);
		}
		else
		{
			return (-15);
		}
		j++;
	}
	return (0);
}
