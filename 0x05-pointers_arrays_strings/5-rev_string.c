#include <string.h>
#include "main.h"
/**
 * rev_string - prints a reverse string
 *
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, index;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s + len - 1;

	for (index = 0; index < len / 2; index++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
