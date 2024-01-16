#include "main.h"
#include <stdio.h>

/**
 * get_bit - retourne la valeur d'un bit à un indice donné.
 * @n: le nombre dont on souhaite extraire le bit.
 * @index: l'indice du bit à extraire, en commençant à 0.
 *
 * Description: La fonction décale les bits de 'n' vers la droite
 * 'index' fois et utilise un masque pour isoler le bit le plus à droite.
 * Si l'indice est trop grand, retourne -1.
 *
 * Return: La valeur du bit à l'indice 'index' ou -1 si une erreur survient.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		{
		return (-1);
		}

	return ((n >> index) & 1);
}
