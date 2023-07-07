#include "main.h"

/**
 * rev_bin - prints binary representation of number and
 * uses recursion to reverse the result
 *
 * @n: decimal number
 * @check: checks for special case number 0
 *
 * Return: void
 */
void rev_bin(unsigned long int n, int check)
{
	if (check == 1)
	{
		_putchar('0');
		return;
	}

	if (n == 0)
		return;

	rev_bin(n >> 1, check);

	if ((n & 1) == 0)
		_putchar('0');

	if ((n & 1) == 1)
		_putchar('1');
}
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: a number in base 10
 *
 * Return:void
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		rev_bin(n, 1);
	else
		rev_bin(n, 0);
}
