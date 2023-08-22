#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *str, *str1;

	while (*haystack != '\0')
	{
		str = haystack;
		str1 = needle;

		while (*haystack != '\0' && *str1 != '\0' && *haystack == *str1)
		{
			haystack++;
			str1++;
		}

		if (*str1 == '\0')
		{
			return (str);
		}
		haystack = str + 1;
	}

	return (0);
}
