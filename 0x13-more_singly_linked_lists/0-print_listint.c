#include "lists.h"

/**
 * print_listint - Entry point.
 * @h:value.
 * Return: Always 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	listint_t *head;

	head = (listint_t *)h;

	while (head != NULL)
	{
		printf(" %d\n", head->n);
		head = head->next;
		node++;
	}
	return (node);
}
