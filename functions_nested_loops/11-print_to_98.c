#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Wow
 * @n: The start
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}

	printf("98\n");
}
