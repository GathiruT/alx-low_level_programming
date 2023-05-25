#include <stdio.h>
#include "main.h"
/**
 * main - prints fizz buzz for multiples of 5 and 3
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 != 0 && i % 5 != 5)
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
