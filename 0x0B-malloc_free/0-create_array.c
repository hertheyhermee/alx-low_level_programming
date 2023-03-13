#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that creates char arrays
 * and inittialize it
 * @size: size of array
 * @c: char to initialize the array
 * Return: NULL if size = 0, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		*(array + x) = c;
	}
	return (array);
}
