#include "main.h"
/**
 * _strcpy - copies a string to a buffer
 *
 * @dest: poiter to the modified string
 * @src: pointer to the string to be changed
 *
 * Return: a string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
