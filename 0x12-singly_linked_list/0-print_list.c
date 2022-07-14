#include <stdlib.h>
#include "limits.h"

/**
 * print_list - print all elements in a list using a
 *	single linked list in a data structure
 * @h: pointer to single link list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
