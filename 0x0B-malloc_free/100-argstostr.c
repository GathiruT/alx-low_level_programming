#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strlen - finds the length of a string
 *
 * @s: string
 *
 * Return:length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string, NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = len + _strlen(av[i]) + 1;
	}

	str = malloc(len * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
