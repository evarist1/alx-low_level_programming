#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number to calculate the factorial
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
