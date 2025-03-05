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
	return (
		y == 0 ?
		-1 :
			y >= 1 ?
			(x * _pow_recursion(x, y - 1)) :
			-1
	);
}
