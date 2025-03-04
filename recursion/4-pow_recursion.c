#include "main.h"

/**
 * _pow_recursion - POW AND THE DIRT IS GONE
 * @x: x
 * @y: y
 *
 * Return: Numbers
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));
	return (-1);
}
