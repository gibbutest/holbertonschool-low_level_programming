#include <stdio.h>

/**
 * main - main
 *
 * Return: return
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
