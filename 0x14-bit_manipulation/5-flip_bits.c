#include "main.h"

/**
 * flip_bits - count the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, read = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		current = exclusive >> v;
		if (current & 1)
			read++;
	}

	return (read);
}
