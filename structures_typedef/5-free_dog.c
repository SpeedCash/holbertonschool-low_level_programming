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
