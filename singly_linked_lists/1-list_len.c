#include <stdio.h>
#include "lists.h"

/**
 * list_len - Compte le nombre d'éléments dans une
 * liste chaînée de type list_t
 * @h: Pointeur vers le début de la liste chaînée
 *
 * Return: Le nombre de nœuds (éléments) dans la liste
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
		{
		count++;
		h = h->next;
		}

	return (count);
}
