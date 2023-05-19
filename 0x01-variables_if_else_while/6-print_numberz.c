#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints single numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
