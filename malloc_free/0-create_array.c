#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create the array kronk!
 *
 * Description: Creates the array.
 * @size: The size
 * @c: The char
 *
 * Return: Null or Array
 */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	tmp = malloc(size * sizeof(char));
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i] = c;

	return (tmp);
}
