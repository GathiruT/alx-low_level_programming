#include "main.h"
/**
 * print_most_numbers - print most numbers except 2 and 4
 *
 * Reaturn: always 0
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
