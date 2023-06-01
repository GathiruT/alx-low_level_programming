#include "main.h"

/**
* leet - encode a string with numbers
* @c: array to encode
*
* Return: modified string
*/

char *leet(char *c)
{
	int i, j;

	char *s = "aAeEoOtTlL";
	char *k = "4433007711";

	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == s[j])
				c[i] = k[j];
		}
		i++;
	}

	return (c);
}
