#include "lists.h"

/**
 * dlistint_len - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;
	dlistint_t *list;

	list = (dlistint_t *)h;

	for (a = 0; list != NULL; a++)
	{
		list = list->next;
	}
	return (a);
}
