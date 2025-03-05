#include "main.h"

/**
 * factorial - Factorio???
 * @n: The number
 *
 * Return: THE NUMBERS????
 */
int factorial(int n)
{
	return (
		n == 0 ?
			1 :
			n > 0 ?
				(n * factorial(n - 1)) :
				-1;
	);
}
