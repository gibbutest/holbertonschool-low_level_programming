#include "main.h"

/**
 * main - Main
 *
 * Return: return
 */
int main(void) {
	char *string = "_putchar\n";

	while(*string)
	{
		_putchar(*string);
		string++;
	}

	return (0);
}
