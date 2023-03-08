#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: given number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else
		return(factorial(n));
}
