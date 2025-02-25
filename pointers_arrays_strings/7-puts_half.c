#include "main.h"

/**
 * puts_half - THE SPINOFF TO PUTS 1
 *
 * Description: The better puts.
 * @str: The string
 */
void puts_half(char *str)
{
	int i;
	int length;
	int half;
	
	for (i = 0;	str[i]; i++)
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (i = half; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
