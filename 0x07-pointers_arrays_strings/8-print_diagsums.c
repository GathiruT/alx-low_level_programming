#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array of characters
 * @size: number of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int s = 0, s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[(size * i) + i];
		s1 += a[(size * (i + 1))];
	}

	printf("%d, %d\n", s, s1);
}

