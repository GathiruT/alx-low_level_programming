#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i, j;

	for (j = 48; j < 58; j++)
	{
		for (i = 48; i < 58; i++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar(j);
				putchar(i);
				if (!(i == 57 && j == 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
