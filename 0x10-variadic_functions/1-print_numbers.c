#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @separator: string to be printed
 * @n: no of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
