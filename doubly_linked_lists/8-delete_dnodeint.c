#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node
 * at index index of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	if (count == 0)
		*head = temp->next;

	free(temp);
	return (1);
}
