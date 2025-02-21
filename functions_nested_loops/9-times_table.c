#include "main.h"

/**
 * print_9_times_table - Wow?
 */
void times_table(void)
{
	int i;
	int a;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 10; a++)
		{
			res = a * 9;
			if (res >= 10)
				_putchar('0' + (res / 10));

			_putchar('0' + (res % 10));
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
