#include "lists.h"

/**
 * add_node - Add the nodes and stuffs
 * @head: The head/entry pointer
 * @str: The string to be duplicated
 *
 * Return: Pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
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
	new->next = *head;
	*head = new;

	return (new);
}
