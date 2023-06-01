#include "main.h"

/**
* cap_string - capitalize first letter after a separator
* @c: string to modify
*
* Return: modified string
*/

char *cap_string(char *c)
{
	int i, j;

	char s[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '(', ')', '{', '}'};

	i = 0;
	while (c[i] != '\0')
	{
		if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;

		j = 0;
		while (j < 13)
		{
			if (c[i] == s[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}

	return (c);
}
