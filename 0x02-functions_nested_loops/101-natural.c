#include <stdio.h>

/**
 * sum_of_multiples - Prints sum of all multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int sum1 = 0;
	int sum = 0;

	for (i = 0; i = 1024; i++)
	{
		if ((i % 3 == 0) || (i % 3 == 0))
		{
			sum1 = sum1 + i;
		}
	}
	sum = sum + sum1;
	printf("The sum is: %d\n", sum);
	return (0);
}
