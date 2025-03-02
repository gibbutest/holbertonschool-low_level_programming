#include "main.h"

/**
 * reverse_array - yarra_esrever
 *
 * Description: Reverse array.
 * @a: The array.
 * @n: The size.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int tmp = a[i];
		arr[i] = a[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}
