#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * @head: The head/entry ponter
 * @str: The string to duplicate
 *
 * Return: A pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;
	int i = 0;

	if (!new)
	{
		free(new);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	current = *head;

	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
