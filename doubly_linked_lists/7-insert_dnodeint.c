#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the dlistint_t list
 * @idx: Index where the new node should be added, starting at 0
 * @n: Data to be added in the new node
 *
 * Description: Inserts a new node at a specified index in a dlistint_t
 * linked list. If the index is 0, adds at the beginning. If the index
 * is at the end of the list, adds at the end. Otherwise, inserts in
 * the middle. If the index is out of bounds, returns NULL.
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL && count == idx)
		return (add_dnodeint_end(h, n));

	else if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}

