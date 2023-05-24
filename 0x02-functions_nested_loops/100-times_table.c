#include "main.h"
/**
 * print_times_table - Prints n times table starting with 0
 *
 * @n: integer to print
 */
void print_times_table(int n)
{
	int r, c, answer;

	if (n >= 0 && n < 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				answer = r * c;
				if (c == 0)
					_putchar('0');
				else if (answer < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(answer % 10 + '0');
				}
				else if (answer >= 10 && answer < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((answer / 10) % 10 + '0');
					_putchar(answer % 10 + '0');
				}
				else if (answer >= 100 && answer < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(answer / 100 + '0');
					_putchar((answer / 10) % 10 + '0');
					_putchar(answer % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
