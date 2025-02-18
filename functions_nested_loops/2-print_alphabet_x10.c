#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int c;
  int i;

  for (i = 0; i < 10; i++)
    for (c = 'a'; c <= 'z'; c++)
      _putchar(c);

	_putchar('\n');
}
