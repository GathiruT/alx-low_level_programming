#include "main.h"
#include <stdlib.h>

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: the integer value to compute
 *
 * Return: value of integer
 */

int _abs(int i)
{
	if (i < 0)
		return (i * (-1));

	else if (i == 0)
		return (0);

	else
		return (i);
}
