#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point.
 * @head: pointer value.
 * @index: unsigned inv value
 * Return: Always 0 (Success)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *aux;
	unsigned int i = 0;

	aux = *head;
	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	while (i < index - 1)
	{
		aux = aux->next;
		if (aux == NULL)
			return (-1);
		i++;
	}
	node = aux->next->next;
	free(aux->next);
	aux->next = node;
	if (aux->next)
		aux->next->prev = aux;
	return (1);
}
