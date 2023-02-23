#include "main.h"

/**
 * more_numbers - print 10times the numbers, 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + j);
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}

