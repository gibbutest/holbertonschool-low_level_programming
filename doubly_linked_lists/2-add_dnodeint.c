#include "lists.h"

/**
 * add_dnodeint - Function stuffs
 *
 * Description: Adds a new node to the start
 * @head: The head/entry pointer
 * @n: The number to add
 *
 * Return: Address to the node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head)
		(*head)->prev = tmp;

	*head = tmp;

	return (*head);
}
