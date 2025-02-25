#include "main.h"

/**
 * swap_int - Swap the ints
 *
 * Description: Swaps the ints
 * @a: The first
 * @b: The second
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = b;
	*b = temp;
}
