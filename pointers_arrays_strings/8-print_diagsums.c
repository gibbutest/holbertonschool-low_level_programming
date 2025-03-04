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
	int z = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		x = a[i];
		y = a[(size * z) - z];
		z++;
	}

	printf("%d, %d\n", x, y);
}
