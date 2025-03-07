#include <stdio.h>
#include <stdlib.h>

/**
 * main - Run the code!
 * @argc: The arg count
 * @argv: The args
 *
 * Return: The sum of numbers or Error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
			sum += atoi(argv[i]);
		else {
			printf("Error\n");
			return (0);
		}
	}

	printf("%d\n", sum);
	return (0);
}
