#include "main.h"
#include <stdlib.h>

int count_word(char *s);

/**
 * count_words - counts the number of words in a string
 *
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings, NULL on error
 */
char **strtow(char *str)
{
	char **f, *col;
	int i, j, len, words, c, start, end;

	len = 0;
	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	f = (char **) malloc(sizeof(char *) * (words + 1));
	if (f == NULL)
		return (NULL);

	j = 0;
	c = 0;
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				col = (char *) malloc(sizeof(char) * (c + 1));
				if (col == NULL)
					return (NULL);
				while (start < end)
					*col++ = str[start++];
				*col = '\0';
				f[j] = col - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	f[j] = NULL;

	return (f);
}
