#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Compte le nombre de bits à changer pour
 * convertir un nombre en un autre.
 * @n: Le premier nombre.
 * @m: Le deuxième nombre.
 *
 * Description:
 * Cette fonction utilise l'opérateur XOR pour déterminer quels bits
 * diffèrent entre les deux nombres. Ensuite, elle compte le nombre
 * de bits à 1 dans le résultat du XOR, ce qui représente le nombre
 * de bits à changer.
 *
 * Return: Le nombre de bits à inverser.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
		{
		count += xor & 1;
		xor >>= 1;
		}

	return (count);
}
