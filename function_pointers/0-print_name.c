#include "function_pointers.h"

/**
 * print_name - Print the name Kronk!
 * @name: The name
 * @f: The function to run
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
