#include "main.h"

/**
 * _puts - All the stuffs.
 *
 * Description: maybe.
 * @str: The string
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while(str[i])
		_putchar(*str);

	_putchar('\n');
}
