#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to the structure to initialize
 * @name: name of the structure
 * @age: age of the structure
 * @owner: owner of the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
