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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(*str);

	_putchar('\n');
}
