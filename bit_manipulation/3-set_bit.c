#include "main.h"

/**
 * set_bit - Set the bit Kronk!
 * @n: The number to set
 * @index: The index of the bit
 *
 * Return: numbers
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 20)
		return (-1);

	tmp = *n >> index;
	tmp |= 1;
	tmp <<= index;

	*n |= tmp;

	return (1);
}
