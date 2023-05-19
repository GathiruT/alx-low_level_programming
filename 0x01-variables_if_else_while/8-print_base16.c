#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
