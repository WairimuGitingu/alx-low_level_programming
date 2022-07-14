#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements in a list using
 *	single linked list data structure
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
