#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *p, k, num, j;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	p = malloc(sizeof(int) * k);

	if (p == NULL)
		return (NULL);

	for (num = min, j = 0; num <= max && j < k; num++, j++)
		p[j] = num;

	return (p);
}
