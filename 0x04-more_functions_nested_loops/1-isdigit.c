#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The chacter to be checked
 * Return: 1 for digit  character or for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

