#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: the first node
 * @n: the new int to be added
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_int;

	new_int = malloc(sizeof(listint_t));
	if (new_int == NULL)
		return (NULL);
	new_int->n = n;
	new_int->next = *head;

	*head = new_int;
	return (new_int);
}
