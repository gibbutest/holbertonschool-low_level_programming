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
		for (b = 1; b < 10; b++)
		{
			res = a * b;
			if (res / 10 == 0)
			{
				res = res %  10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else {
				res = (res / 10) % 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + res);
			}
		}
		_putchar('\n');
	}
}
