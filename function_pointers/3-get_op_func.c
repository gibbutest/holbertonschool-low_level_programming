#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Get the right operator.
 * @s: The string operator to match.
 *
 * Return: Pointer to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 5;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}
	
	return (0);
}
