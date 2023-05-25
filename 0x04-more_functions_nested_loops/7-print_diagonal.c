#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: number of times the \ loops
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int space;

	if (n > 0)
	{
		while (i < n)
		{
			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
