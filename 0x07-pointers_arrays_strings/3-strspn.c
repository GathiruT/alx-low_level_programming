#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 *
 * Return: number of bytes of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, prev;
	int i = 0, j;

	count = 0;
	prev = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}

		if (prev == count)
		{
			break;
		}
		i++;
	}

	return (count);
}
