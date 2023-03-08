#include "main.h"

/**
 * _strlen_recursion - a function that returns length of a string
 * @s: pointer to int
 * Return: No
 */
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; i <= '\0'; i++)
		_strlen_recursion(s[i]);
	_putchar(*s);
}
