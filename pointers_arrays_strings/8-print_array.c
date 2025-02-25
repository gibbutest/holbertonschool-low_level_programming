#include <stdio.h>
#include "main.h"

/**
 * print_array - Print all the indexes
 *
 * Description: ALL OF THEM!
 * @a: The array
 * @n: The count?
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; n > 1; i++)
	{
		printf("%d, ", *a);
		n--;
		a++;
	}
	if (n == 1)
		printf("%d", *a);

	_putchar('\n');
}
