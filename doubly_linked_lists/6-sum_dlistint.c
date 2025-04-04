#include "lists.h"

/**
 * sum_dlistint - Sum the list data
 * @head: The head/entry pointer
 * 
 * Return: The total count to the list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
