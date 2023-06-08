#include "main.h"

int helper(int i, int j);

/**
 * _sqrt_recursion - calculates the natural square root of number
 *
 * @n: interger to calculat
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}

/**
 * helper - helper function to solve squareroot
 *
 * @i: Determines if a number is square root
 * @j: compares with i
 *
 * Return: Square root if exists, -1 if not
 */
int helper(int i, int j)
{
	int square;

	square = j *j;
	if (square == i)
		return (j);

	else if (square < i)
		return (helper(i, j + 1));

	return (-1);
}
