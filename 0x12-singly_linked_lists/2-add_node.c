#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a node at the beginning
 * @head: pointer to head node
 * @str: string to be added to list_t list
 *
 * Return: adrress of the new node else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
