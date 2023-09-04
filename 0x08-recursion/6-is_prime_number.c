#include "main.h"

/**
 * check_prime - function that returns 1 if the input integer is a prime
 * @n: the number to be checked
 * @i: the iteration times
 * Return: 1 for  prime, 0 for composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (0);

	return (check_prime(n, i + 1));
}
