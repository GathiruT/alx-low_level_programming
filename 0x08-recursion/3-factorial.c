#include "main.h"

/**
 * factorial - Returns a factorial of a number
 *
 * @n: number to be used
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
