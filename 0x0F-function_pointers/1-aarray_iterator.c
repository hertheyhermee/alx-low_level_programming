#include "functions_parameter.h"

/**
 * array_iterator - a function that executes  function
 * @array: array to execute
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

