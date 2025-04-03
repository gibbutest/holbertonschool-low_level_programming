#include "lists.h"

/**
 * print_dlistint - Counts the amount of elements in a list
 * @h: The head/entry pointer
 *
 * Return: The size
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int i;

	for (i = 0; head; i++)
	{
		printf("%i\n", head->n);
		head = head->next;
	}

	return (i);
}
