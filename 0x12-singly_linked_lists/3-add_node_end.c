#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list.
 * @head: the first node
 * @str: input string
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *end_node;
	list_t *alt;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	end_node->len = i;
	end_node->str = strdup(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	alt = *head;
	while (alt->next != NULL)
	{
		alt = alt->next;
	}
	alt->next = end_node;
	return (end_node);
}
