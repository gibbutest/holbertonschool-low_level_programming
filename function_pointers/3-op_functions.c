#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two ints.
 * @a: First int
 * @b: Second int
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two ints.
 * @a: First int
 * @b: Second int
 *
 * Return: a - b;
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two ints.
 * @a: First int
 * @b: Second int
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two ints.
 * @a: First int
 * @b: Second int
 *
 * Return: a / b OR Error/exit 100
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Mod two ints.
 * @a: First int
 * @b: Second int
 *
 * Return: a & b OR Error/exit 100
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
