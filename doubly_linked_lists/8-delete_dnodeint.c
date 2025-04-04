#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at the index position
 * @head: The head/entry pointer
 * @index: The position to delete from the list
 *
 * Return: 1 for success or -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0; tmp != NULL && i < index; i++)
		tmp = tmp->next;

	if (!tmp)
		return (-1);

	if (*head == tmp)
		*head = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	free(tmp);

	return (1);
}
