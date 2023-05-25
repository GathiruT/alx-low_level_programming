#include "main.h"
/**
 * print_line - Draws a staight line in the terminal
 *
 * @n: Number of times to print _
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
