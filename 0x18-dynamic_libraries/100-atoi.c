#include "main.h"

int isnum(int n);

/**
 * isnum - check for a digit
 *
 * @n: the number
 *
 * Return: 1 if it is a number, 0 otherwise
 */

int isnum(int n)
{
	return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - converts a string into an integer
 *
 * @s: the string
 *
 * Return: The digit
 */

int _atoi(char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isnum(s[i]))
		{
			num = (s[i] - 48) + num * 10;

			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}

	}

	return (num * sign);
}
