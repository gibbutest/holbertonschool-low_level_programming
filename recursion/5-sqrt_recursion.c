#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);

	n = _sqrt_recursion(n - 1) + n + n - 1;
	return (n);
}
