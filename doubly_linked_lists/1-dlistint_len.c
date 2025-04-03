#include "lists.h"

/**
 * dlistint_len - Counts the amount of elements in a list
 * @h: The head/entry pointer
 *
 * Return: The size
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int i;

	for (i = 0; head; i++)
		head = head->next;

	return (i);
}
