#include "main"

/**
 * print_9_times_table - Wow?
 */
void print_9_times_table(void)
{
	int i;
	int res;

	for (i = 0; i < 10; i++)
	{
		res = i * 9;

		if (res >= 10)
			_putchar('0' + (res / 10));
		
		_putchar('0' + (res % 10));
		_putchar('\n');
	}
}
