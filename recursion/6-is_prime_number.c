/**
 * get_prime - Gets the Optimus Prime number
 *
 * Description: Autobots, roll out!
 * @n: The number
 * @base: The base case
 *
 * Return: Numbers
 */
int get_prime(int n, int base)
{
	return (
		base <= 1 || n % base == 0 ?
			0 :
			base * base > n ?
				1 :
				get_prime(n, base + 1)
	);
}

/**
 * is_prime_number - Checks if the number is Optimus Prime
 *
 * Description: Read above.
 * @n: The number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (n <= 1 ? 0 : get_prime(n, 2));
}
