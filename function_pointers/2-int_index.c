#include "function_pointers.h"

/**
 * int_index - Search for the index
 * @array: The array to search through
 * @size: The size/limit of the array
 * @cmp: The compare function to use
 *
 * Return: The index or -1 if none is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
