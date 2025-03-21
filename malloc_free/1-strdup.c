#include <stdlib.h>

/**
 * _strdup - Copy and point
 *
 * Description: Copy the string and place in to space
 * @str: The string
 *
 * Return: New str
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *tmp;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	; /* This style guide is something else... */

	tmp = malloc((size + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		tmp[i] = str[i];

	return (tmp);
}
