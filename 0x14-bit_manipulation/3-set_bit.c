#include "main.h"

/**
 * set_bit - afunction that sets the value of a bit to 1 at a given index
 * @index: the index
 * @n: unsigned long int
 * Return: 1 (success), -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (!(*n & (1 << index)))
		*n += (1 << index);

	return (1);
}
