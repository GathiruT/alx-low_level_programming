#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks a string if its palindrome or not
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i, c = 0, n;

	n = strlen(s);
	for (i = 0; i < n / 2; i++)
	{
		if (s[i] == s[n - i - 1])
			c++;
	}

	if (c == i)
		return (1);
	else
		return (0);
}
