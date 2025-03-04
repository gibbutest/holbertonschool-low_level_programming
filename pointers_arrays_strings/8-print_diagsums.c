#include <stdio.h>

/**
 * print_diagsums - Print the stuffs
 * @a: The array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i * size + i];
		y += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", x, y);
}
