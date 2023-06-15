#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(sizeof(b));
	if (i == NULL)
		exit(98);

	return (i);
}
