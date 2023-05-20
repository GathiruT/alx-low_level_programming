#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three digits
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i, j, k;

	for (k = 48; k < 58; k++)
	{
		for (j = 48; j < 58; j++)
		{
			for (i = 48; i < 58; i++)
			{
				if (!((i == j) || (k == j) || (j > i) || (k > j)))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (!(i == 57 && j == 56 && k == 55))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
