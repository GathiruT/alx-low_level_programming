#include "main.h"

/**
 * _islower - returns 1 if a lowercase character
 *
 * Return: 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
