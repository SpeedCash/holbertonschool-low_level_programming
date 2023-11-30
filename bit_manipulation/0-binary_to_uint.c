#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convertit une chaîne binaire en un entier non signé.
 * @b: pointeur vers une chaîne de caractères contenant le nombre binaire.
 *
 * Description: Parcourt la chaîne binaire et convertit chaque bit en sa
 * valeur décimale. Ignore tout caractère autre que '0' et '1'.
 * Retourne 0 si un caractère non binaire est trouvé ou si b est NULL.
 *
 * Return: Le nombre entier non signé converti, ou 0 en cas d'erreur.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		if (b[i] == '1')
			num += 1;
		}

	return (num);
}
