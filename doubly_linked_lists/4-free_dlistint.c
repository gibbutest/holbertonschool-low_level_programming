#include "lists.h"

/**
 * free_dlistint - Frees the memory for th entire list
 * @head: The head/entry pointer
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->prev)
			free(head->prev);
		if (!head->next)
		{
			free(head);
			return;
		}
		head = head->next;
	}
}
