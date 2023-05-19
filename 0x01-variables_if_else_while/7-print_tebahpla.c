#include <stdio.h>

/**
 * main - print the lowercase alphabet
 *
 * Description: prints the lowercase in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
