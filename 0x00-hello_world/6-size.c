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
	printf("Size of int is: %d bytes\n", (int) sizeof(int));
	printf("Size of char is: %d byte\n", (int) sizeof(char));
	printf("Size of long int is: %d bytes\n", (int) sizeof(long int));
	printf("Size of long long int is: %d bytes\n", (int) sizeof(long long int));
	printf("Size of a float is: %d bytes\n", (int) sizeof(float));

	return (0);
}
