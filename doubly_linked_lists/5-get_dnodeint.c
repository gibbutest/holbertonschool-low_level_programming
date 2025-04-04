#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at the index
 * @head: The head/entry pointer
 * @index: The position of the node to get
 *
 * Return: The node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head; i++)
		head = head->next;

	return (head);
}
