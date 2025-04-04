#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int prev = n ^ m;
	unsigned int bits = 0;

	while (prev)
	{
		bits += prev & 1;
		prev >>= 1;
	}

	return  (bits);
}
