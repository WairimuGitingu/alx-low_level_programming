#include "main.h"

/**
 * rot13 - encodes charactrs by +/- 13
 * @n: char
 * Return:n
 */

char *rot13(char *n)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
