#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: the first node
 * @str: input string
 * Return: address of the new element,
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
