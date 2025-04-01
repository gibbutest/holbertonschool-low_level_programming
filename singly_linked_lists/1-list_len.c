#include "lists.h"

/**
 * list_len - Number of nodes
 * @h: The head/entry pointer
 *
 * Return: The number of nodes
 */ 
size_t list_len(const list_t *h)
{
	const list_t *head = h;
	int i;

	for (i = 0; head; i++)
		head = head->next;

	return (i);
}
