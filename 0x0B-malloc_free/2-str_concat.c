#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concanates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the new string, NULL if empty
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, len1, len, k;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2) + 1));
	if (str == NULL)
		return (NULL);

	k = i + j + 1;
	for (len1 = 0, len = 0; len1 < k; len1++)
	{
		if (len1 < i)
			str[len1] = s1[len1];
		else
			str[len1] = s2[len++];
	}

	return (str);
}
