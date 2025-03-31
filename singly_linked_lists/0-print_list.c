#include "lists.h"

/**
 * print_list - Print the list Kronk!
 * @h: The head/entry pointer.
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	int i;
	unsigned int len = 0;
	char *str = "";

	for (i = 0; head != NULL; i++)
	{
		if (head->str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		else
		{
			str = head->str;
			len = head->len;
		}
		printf("[%i] %s\n", len, str);

		head = head->next;
	}

	return (i);
}
