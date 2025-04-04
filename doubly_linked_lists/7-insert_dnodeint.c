#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at the index position
 * @h: The head/entry pointer
 * @idx: The index position to insert a new node
 * @n: The data to add
 *
 * Return: The newly created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *old;

	if (idx == 0)
		return (add_dnodeint(h, n));

	old = *h;

	while (idx > 1 && old)
	{
		old = old->next;
		idx--;
	}

	if (!old)
		return (NULL);

	if (!old->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = old;
	new->next = old->next;

	old->next->prev = new;
	old->next = new;

	return (new);
}

