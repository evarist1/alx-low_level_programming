#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of bit
 * Return: value the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}