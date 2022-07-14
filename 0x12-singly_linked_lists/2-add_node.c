#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to head of the single linked list
 * @str: string to be put in the first node
 *
 * Return: the new node address added elese NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *temp;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = temp;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
