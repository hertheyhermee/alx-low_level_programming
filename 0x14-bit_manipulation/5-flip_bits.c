#include "main.h"

/**
 * flip_bits - a funtion that returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_of_bits = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			no_of_bits++;
		n >>= 1;
		m >>= 1;
	}

	return (no_of_bits);
}
