#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the dog structure to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a dog structure with the provided
 * name, age, and owner information.
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
