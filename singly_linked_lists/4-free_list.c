#include "lists.h"

/**
 * free_list - Frees the list of all it's problems
 * @head: The head/entry pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
