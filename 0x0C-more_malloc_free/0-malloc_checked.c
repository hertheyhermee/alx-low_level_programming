#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * Returns pointer to the allocated memory
 * Returns NULL if insufficient memory was available
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
