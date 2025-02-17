#include <stdio.h>

/**
 * main - Main
 *
 * Return: return
 */
int main(void)
{
	int i;
	int hex;

	for (i = 0; i < 16; i++)
	{
		hex = i < 10 ? '0' : 'a' - 10;
		putchar(i + hex);
	}

	putchar('\n');

	return (0);
}
