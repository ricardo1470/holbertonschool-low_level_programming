#include "lists.h"

/**
 * print_dlistint - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;
	dlistint_t *list;

	list = (dlistint_t *)h;

	for (a = 0; list != NULL; a++)
	{
		printf("%d\n", list->n);
		list = list->next;
	}
	return (a);
}
