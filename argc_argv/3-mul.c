#include <stdio.h>
#include <stdlib.h>

/**
 * main - Run the code
 * @argc: The arg count
 * @argv: The args
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
