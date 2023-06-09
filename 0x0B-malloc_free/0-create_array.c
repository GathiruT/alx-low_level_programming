#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: size of the array
 * @c: the constant string
 *
 * Return: a pointer to the array, NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
