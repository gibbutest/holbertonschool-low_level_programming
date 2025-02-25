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

	for (i = 0; i + 1 > n; i++)
	{
		if (n > 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

		n--;
	}

	_putchar('\n');
}
