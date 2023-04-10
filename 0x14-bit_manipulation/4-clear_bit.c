#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @index: the index
 * @n: pointer
 * Return: 1 (success), -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((*n & (1UL << index)) != 0)
	{
		*n ^= (1UL << index);
		return (1);
	}
	else
	{
		return (1);
	}
}
