#include <stdio.h>

/**
 * main - The main
 *
 * Description: The dreaded FizzBuzz question!
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 99)
		{
			putchar('\n');
		}
		else
		{
			putchar(' ');
		}
	}

	return (0);
}
