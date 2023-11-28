#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère une liste list_t
 * @head: Pointeur vers le début de la liste
 *
 * Description: Libère la mémoire allouée pour chaque nœud de la liste
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
		{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
		}
}
