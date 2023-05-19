#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the size of data types
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char  %d bytes\n", (int) sizeof(char));
	printf("Size of an int: %d byte\n", (int) sizeof(int));
	printf("Size of a long int: %d bytes\n", (int) sizeof(long int));
	printf("Size of a long long int: %d bytes\n", (int) sizeof(long long int));
	printf("Size of a float: %d bytes\n", (int) sizeof(float));

	return (0);
}
