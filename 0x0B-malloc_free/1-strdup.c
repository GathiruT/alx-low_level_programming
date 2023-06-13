#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the duplicate of string str
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to new string, NULL if empty
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	len = 0;
	while (len < i)
	{
		s[len] = str[len];
		len++;
	}
	s[len] = '\0';

	return (s);
}
