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
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
