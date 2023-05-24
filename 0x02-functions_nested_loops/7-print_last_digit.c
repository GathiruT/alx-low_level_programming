#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: The number to print
 *
 * Return: always 0
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
	{
		last = (num % 10) * -1;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = num % 10;
		_putchar(last + '0');
		return (last);
	}
}
