#include <stdio.h>

/**
 * main - Main
 *
 * Return: return
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' || i != 'e')
			putchar(i);

	putchar('\n');

	return (0);
}
