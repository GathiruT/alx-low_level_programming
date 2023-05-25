#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, space, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (space = size - 1; space > i; space--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
