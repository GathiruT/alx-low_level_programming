#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int len;
	int half;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}

	half = (strlen(str) + 1) / 2;
	for (len = half; str[len]; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
