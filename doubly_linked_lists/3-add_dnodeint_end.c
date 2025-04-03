#include "lists.h"

/**
 * add_dnodeint_end - Function stuffs
 *
 * Description: Adds a new node to the end
 * @head: The head/entry pointer
 * @n: The number to add
 *
 * Return: The address to the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *prev;
	dlistint_t *next = malloc(sizeof(dlistint_t));

	if (!next)
	{
		free(next);
		return (NULL);
	}

	next->n = n;
	next->next = NULL;

	if (!*head)
	{
		next->prev = NULL;
		*head = next;
		return (next);
	}

	prev = *head;

	while (prev->next)
		prev = prev->next;

	next->prev = prev;
	prev->next = next;

	return (next);
}
