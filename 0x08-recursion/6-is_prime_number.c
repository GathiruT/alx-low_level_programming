#include "main.h"

int actual_prime(int j, int k);

/**
 * actual_prime - helper recursion function
 *
 * @j: number to evaluate
 * @k: number to loop
 *
 * Return: return 1 if j is prime else 0
 */
int actual_prime(int j, int k)
{
	if (k == 1)
		return (1);
	if (j % k == 0 && k > 0)
		return (0);
	return (actual_prime(j, k - 1));
}

/**
 * is_prime_number - determines if an integer is a prime number or not
 *
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
