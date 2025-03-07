#include <stdio.h>

/**
 * main - The code to run!
 * @argc: The arg count
 * @argv: The args
 *
 * Return: 0
 */
int main(int argc, char argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
