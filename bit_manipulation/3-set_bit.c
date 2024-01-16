#include "main.h"
#include <stdio.h>

/**
 * set_bit - met à 1 le bit à un indice donné dans un nombre.
 * @n: un pointeur vers le nombre à modifier.
 * @index: l'indice du bit à modifier, en commençant à 0.
 *
 * Description: La fonction utilise un masque pour mettre à 1 le bit
 * à l'indice spécifié. Si l'indice est trop grand, retourne -1.
 *
 * Return: 1 si la modification a réussi, ou -1 si une erreur survient.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		{
		return (-1);
		}

	*n |= (1UL << index);

	return (1);
}
