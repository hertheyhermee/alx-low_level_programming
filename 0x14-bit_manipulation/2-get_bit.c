#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index
 * @n: unsigned long int
 * Return: value of bit at index, 0 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	while (i <= 63)
	{
		if (index == i)
			return ((n >> index) & 1);
		i++;
	}

	return (-1);
}
