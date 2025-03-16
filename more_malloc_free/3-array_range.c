#include <stdlib.h>
#include "main.h"

/**
 * array_range - We going down da range!
 * @min: The minimum
 * @max: The maximum
 *
 * Return: pointer to new array.
 */
int *array_range(int min, int max)
{
	int *tmp;
	int size = max - min + 1;
	int i;

	if (min > max)
		return (NULL);

	tmp = malloc(size * sizeof(int));
	if (!tmp)
		return (NULL);

	for (i = 0; i < size; i++)
		tmp[i] = min + 1;

	return (tmp);
}
