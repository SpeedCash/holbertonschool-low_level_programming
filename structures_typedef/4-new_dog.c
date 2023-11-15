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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		{
		return (NULL);
		}

	if (name != NULL)
		{
		new_dog->name = malloc(strlen(name) + 1);
		if (new_dog->name == NULL)
			{
			free(new_dog);
			return (NULL);
			}
		strcpy(new_dog->name, name);
	}
	else
		{
		new_dog->name = NULL;
		}

	new_dog->age = age;

	if (owner != NULL)
		{
		new_dog->owner = malloc(strlen(owner) + 1);
		if (new_dog->owner == NULL)
			{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
			}
		strcpy(new_dog->owner, owner);
	}
	else
		{
		new_dog->owner = NULL;
		}

	return (new_dog);
}
