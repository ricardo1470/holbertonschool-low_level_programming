#include "lists.h"
/**
 * add_dnodeint - Entry point.
 * @head: pointer to the head.
 * @n: value
 * Return: Always 0 (Success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
    {
		return (NULL);
    }
	new_node->n = n;
	new_node->prev = NULL;

	if (!(*head))
    {
		new_node->next = NULL;
    }
	else
	{	new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
