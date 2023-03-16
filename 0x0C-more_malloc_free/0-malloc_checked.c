#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - a function that returns a pointe
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * Returns NULL if insufficient memory was available
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
