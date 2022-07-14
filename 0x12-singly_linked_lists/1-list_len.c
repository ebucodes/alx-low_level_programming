#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: the first node
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
