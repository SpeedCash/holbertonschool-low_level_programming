#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog instance.
 *
 * This function creates a new instance of the 'dog_t'
 * structure and initializes
 * its fields with the provided name, age, and owner. Memory is allocated for
 * copying the name and owner strings. If memory allocation fails at any point,
 * the function returns NULL.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog instance, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		{
		return (NULL);
		}

	new_dog->name = strdup(name);
		if (new_dog->name == NULL)
			{
			free(new_dog);
			return (NULL);
			}

	new_dog->age = age;
	new_dog->owner = strdup(owner);

		if (new_dog->owner == NULL)
			{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
			}

	return (new_dog);
}

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
