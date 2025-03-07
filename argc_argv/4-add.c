#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		if (strspn(argv[i], "1234567890") == strlen(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}

	printf("%d\n", sum);
	return (0);
}
