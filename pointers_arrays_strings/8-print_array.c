#include <stdio.h>
#include "main.h"

/**
 * print_array - Print all the indexes
 *
 * Description: ALL OF THEM!
 * @a: The array
 * @n: The number of indexes to print.
 */
void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i++;
	}

	if (n == 1)
		_putchar("%d", a[i]);

	_putchar('\n');
}
