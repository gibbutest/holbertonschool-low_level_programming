#include "main.h"

/**
 * _print_rev_recursion - noisrucer_ver_tnirp
 * 
 * Description: Print in reverse????
 * @s: The string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		s++;
	}
}
