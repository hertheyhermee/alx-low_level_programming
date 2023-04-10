#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number, 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0, scratch_base = 1;
	int length = 0;

	if (!b)
		return (0);

	while (b[length])
		length++;

	while (--length >= 0)
	{
		if (b[length] != '0' && b[len] != '1')
			return (0);

		if (b[length] & 1)
			convert += scratch_base;

		scratch_base *= 2;
	}

	return (convert);
}
