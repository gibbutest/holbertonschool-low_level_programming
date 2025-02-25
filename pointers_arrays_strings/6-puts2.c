#include "main.h"

/**
 * puts2 - Puts 2 electric boogaloo
 *
 * Description: THE SEQUEL TO PUTS 1
 * @str: The string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i % 2; i++)
		_putchar(str[i]);

	_putchar('\n');
}
