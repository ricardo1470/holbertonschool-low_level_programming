#include "lists.h"

/**
 * add_nodeint - Entry point.
 * @head:value pointer to pointer.
 * @n: value
 * Return: Always 0 (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
