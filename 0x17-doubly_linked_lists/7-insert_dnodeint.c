#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point.
 * @h:pointer value.
 * @idx: unsigned int value.
 * @n: int value
 * Return: Always 0 (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;
	unsigned int count = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!tmp && idx > 0)
	{	free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = tmp;
		*h = node;
		return (node);
	}
	while (count < (idx - 1))
	{
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
		count++;
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
