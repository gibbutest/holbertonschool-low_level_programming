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
	int i = 0;

	for (; n > 1; i++)
	{
		printf("%d, ", a[i]);
		n--;
	}

	if (n == 1)
		printf("%d", a[i]);

	printf("\n");
}
