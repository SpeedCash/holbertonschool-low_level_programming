#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Définit la valeur d'un bit à 0 à un index donné.
 * @n: Pointeur vers le nombre dont on veut modifier le bit.
 * @index: L'index du bit à modifier, en commençant par 0.
 *
 * Description: Cette fonction utilise un masque
 * pour définir un bit spécifique
 * à 0. L'opération de masquage est réalisée
 * en créant d'abord un masque
 * avec un bit à 1 à l'index spécifié,
 * puis en inversant tous les bits
 * du masque. Ensuite, le masque est appliqué au nombre d'origine
 * en utilisant l'opérateur AND. Si l'index est hors de portée,
 * la fonction retourne -1.
 *
 * Return: 1 si l'opération a réussi, -1 en cas d'erreur.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
