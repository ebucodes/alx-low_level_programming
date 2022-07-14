#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: first node
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free(head->next);
	free(head->str);
	free(head);
}
