#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: number to print binary
 */
void print_binary(unsigned long int n)
{
	int b, read = 0;
	unsigned long int current;

	for (b = 63; b >= 0; b--)
	{
		current = n >> b;

		if (current & 1)
		{
			_putchar('1');
			read++;
		}
		else if (read)
			_putchar('0');
	}
	if (!read)
	_putchar('0');
}
