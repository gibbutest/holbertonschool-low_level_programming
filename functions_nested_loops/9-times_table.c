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
		_putchar('0');
		for (b = 0; b < 10; b++)
		{
			res = a * 9;

			if (res > 0)
			{
				if (res >= 10)
					_putchar('0' + res / 10);
	
				_putchar('0' + res % 10);
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
