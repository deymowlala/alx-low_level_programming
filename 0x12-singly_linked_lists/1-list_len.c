#include "lists.h"

/**
 * list_len - Find the length of a list
 * @h: Head node
 * Return: Length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
