#include "main.h"

/**
 * get_bit - Get the bit
 * @n: The number to search
 * @index: The index of the bit
 *
 * Return: Numbers mason... NUMBERS
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 1);
}
