#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the start of the list
 *
 * Return: Number of nodes in the list
 */


size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
		{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
		}

	return (node_count);
}
