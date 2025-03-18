#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
		if (*s == *(ops[i].op))
			return (ops[i].f);
	
	return (0);
}
