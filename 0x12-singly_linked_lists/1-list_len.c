#include "lists.h"
/**
 * list_len - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
	size_t a;
	list_t *list;

	list = (list_t *)h;

	for (a = 0; list != NULL; a++)
	{
		list = list->next;
	}
	return (a);
}
