#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number, 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0, base_two = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	while (--len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			ui += base_two;

		base_two *= 2;
	}

	return (ui);
}
