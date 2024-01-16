#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour une instance de chien.
 *
 * Cette fonction libère la mémoire allouée pour
 * une instance de la structure
 * 'dog_t' et ses champs, y compris le nom et le propriétaire, s'ils ont été
 * alloués dynamiquement. Si l'allocation de mémoire échoue
 * à un moment donné,la fonction ne fait rien.
 *
 * @d: Un pointeur vers l'instance de chien à libérer.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
