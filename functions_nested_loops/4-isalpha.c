#include "main.h"

/**
 * _isalpha - Is it lower? Like... Actually?
 * @c: The char to be checked
 *
 * Return: yes or no
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
