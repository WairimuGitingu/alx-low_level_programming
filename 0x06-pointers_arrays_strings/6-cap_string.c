#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: char
 *
 * Return:n
 */

char *cap_string(char *n)
{
	int i;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\t':
			case '\n':
			if (n[i] > 96 && n[i] < 123)
			{
				n[i] = n[i] - 32;
			}
		}
	}
	return (n);
}
