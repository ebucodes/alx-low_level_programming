#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: the first node
 * @n: the new int to be added
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_int;
	listint_t *alt;

	end_int = malloc(sizeof(listint_t));
	if (end_int == NULL)
		return (NULL);
	end_int->n = n;
	end_int->next = NULL;

	if (*head == NULL)
	{
		*head = end_int;
		return (end_int);
	}
	alt = *head;
	while (alt->next != NULL)
	{
		alt = alt->next;
	}
	alt->next = end_int;
	return (end_int);
}
