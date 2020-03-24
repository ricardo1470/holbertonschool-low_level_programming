#include "lists.h"

/**
 * listint_len - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
