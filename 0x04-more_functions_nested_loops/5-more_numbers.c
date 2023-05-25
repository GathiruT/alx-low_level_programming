#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j, k, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				k = j;
			}
			else if (j >= 10)
			{
				n = j / 10;
				k = j % 10;
				_putchar(n + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
