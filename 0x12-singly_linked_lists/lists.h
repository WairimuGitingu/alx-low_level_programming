#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * list-s - type created by struct
 * @str: string to be typed
 * @len: length of elements
 * @next pointer to list_s
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
