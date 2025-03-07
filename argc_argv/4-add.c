#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] == '\0')
			break;

		if (argv[i] >= '0' && argv[i] <= '9')
			sum += atoi(argv[i]);
		else {
			printf("Error\n");
			return (0);
		}
	}

	printf("%d\n", sum);
	return (0);
}
