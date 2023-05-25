#include "main.h"
/**
 * print_numbers - Prints numbers 0-9 followed by a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
