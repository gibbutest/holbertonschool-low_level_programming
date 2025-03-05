#include "main.h"

/**
 * _strlen_recursion - Weeeeeeeeeeeeee
 *
 * Description: The stuffs
 * @s: The string
 *
 * Return: The numbers!? What do they mean!?
 */
int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) : 0)
}
