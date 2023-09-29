#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int ben, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (ben = 0; b[ben] != '\0'; ben++)
		;

	for (ben--, base_two = 1; ben >= 0; ben--, base_two *= 2)
	{
		if (b[ben] != '0' && b[ben] != '1')
		{
			return (0);
		}

		if (b[ben] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
