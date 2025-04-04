#include "main.h"

/**
 * binary_to_uint - Convert binary to uint
 * @b: The binary string to convert
 * 
 * Return: The resulting uint or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	unsigned int y = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '9')
			return (0);

		y <<= 1;

		if (b[x] == '1')
			y++;
	}

	return (y);
}
