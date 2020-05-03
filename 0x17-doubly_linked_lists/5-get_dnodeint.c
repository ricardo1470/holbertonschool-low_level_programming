#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point.
 * @head:pointer value.
 * @index: value.
 * Return: Always 0 (Success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int a = 0;

	node = head;
	while (a < index && node != NULL)
	{
		node = node->next;
		a++;
	}
	if (a != index)
	{
		return (NULL);
	}
	return (node);
}
