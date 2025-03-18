#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Main function
 * @argc: The arg count
 * @argv: The arg array
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*cb_func)(int, int);

	if (argc < 3 || !argv[1] || !argv[2] || !argv[3])
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	cb_func = get_op_func(argv[2]);
	if (!cb_func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", cb_func(a, b));

	return (0);
}
