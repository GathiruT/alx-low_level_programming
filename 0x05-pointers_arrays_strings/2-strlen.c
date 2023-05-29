#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: the string to return
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (s[str_len] != '\0')
			str_len++;

	return (str_len);
}
