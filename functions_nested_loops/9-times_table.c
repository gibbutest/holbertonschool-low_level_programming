#include "main.h"

/**
 * times_table - Wow?
 */
void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			res = a * 9;

			if (a == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + res / 10);
			}
		}

		_putchar('\n');
	}
}
