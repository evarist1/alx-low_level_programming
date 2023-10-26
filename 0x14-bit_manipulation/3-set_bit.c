#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number of bits to set
 * @index: the index of the bit you want to set
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);

	return (1);
}
