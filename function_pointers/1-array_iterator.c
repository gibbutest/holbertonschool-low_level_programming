#include "function_pointers.h"

/**
 * array_iterator - Print the stuffs
 * @array: The array to interate through
 * @size: The size/limit of the iterator
 * @action: The function to run
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
