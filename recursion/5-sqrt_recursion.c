#include "main.h"

/**
 * sqrt - Skr skr
 *
 * Description: Loop until found the lowest square root.
 * @n: The number
 * @base: The base case
 * 
 * Return: Numbers!
 */
int get_square(int n, int base)
{
	return (
		base * base > n ?
			(-1) :
			base * base == n ?
				base :
				get_square(n, base + 1)
	);
}

/**
 * _sqrt_recursion - We looping bois
 *
 * Description: Loop until found the lowest square root.
 * @n: The number
 *
 * Return: Numbers!
 */
int _sqrt_recursion(int n)
{
	return (n < 0 ? (-1) : get_square(n, 1));
}
