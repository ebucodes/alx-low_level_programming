#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: first node
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
