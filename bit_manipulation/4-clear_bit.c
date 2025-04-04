#include "main.h"

/**
 * clear_bit - Clears the bits
 * @n: The number to clear
 * @index: The index of the bit
 *
 * Return: numbers
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 20)
		return (-1);

	if ((*n >> index & 1) == 0)
		return (1);

	tmp = 1;
	tmp <<= index;
	*n ^= tmp;

	return (1);
}
