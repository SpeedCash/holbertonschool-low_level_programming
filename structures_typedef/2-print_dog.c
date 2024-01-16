#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - Print the information of a dog structure
 * @d: Pointer to the dog structure to be printed
 *
 * Description:
 * This function prints the information of a dog structure, including its name,
 * age, and owner. If any of these fields is NULL, it prints "(nil)" instead.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
		{
		if (d->name != NULL)
			{
			printf("Name: %s\n", d->name);
			}
			else
			{
			printf("Name: (nil)\n");
			}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			{
			printf("Owner: %s\n", d->owner);
			}
			else
			{
			printf("Owner: (nil)\n");
			}
	}
}

