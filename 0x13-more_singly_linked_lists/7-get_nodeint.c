#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: head
 * @index: index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			i++;
			head = head->next;
		}
	}
	return (head);
}
