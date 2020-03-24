#include "lists.h"

/**
 * print_listint - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
