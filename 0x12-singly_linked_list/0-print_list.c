#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements in a list uding single linked list data structure
 * @list_t: type to be declared
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s", h->len, h->str);
		h = h->next;
	}
	return (i);
}
