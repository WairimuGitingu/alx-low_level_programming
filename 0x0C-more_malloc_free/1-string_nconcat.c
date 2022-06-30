#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates s1 and n number of s2
 * @s1: string to be added onto
 * @s2: string to be added
 * @n: number of chars to be added
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	t = malloc(sizeof(char) * (i + j+ 1));
	if (t == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		t[i] = s2[j];
		i++, j++;
	}
	t[i] = '\0';
	return (t);
}
