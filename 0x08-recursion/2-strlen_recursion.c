#include "main.h"

/**
 * _strlen_recursion - a function that returns length of a string
 * @s: pointer to int
 * Return: No
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		_strlen_recurssion(s);
	_putchar(*s);
}
