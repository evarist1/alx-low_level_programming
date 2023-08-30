#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints a function that returns the length of stri
 * ng
 * @s: the string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
