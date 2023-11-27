#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t
 * @head: Pointeur double vers la tête de la liste
 * @str: La chaîne de caractères à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'allocation échoue
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		{
		free(dup_str);
		return (NULL);
		}

	new_node->str = dup_str;
	new_node->len = strlen(dup_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
