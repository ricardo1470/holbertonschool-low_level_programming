#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point.
 * @head: pointer value.
 * @index: unsigned inv value
 * Return: Always 0 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *aux;
	unsigned int i = 0;

	aux = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
	}
	else
	{

		while (i < index - 1)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
			i++;
		}
		node = aux;
		node = node->next;
		aux->next = node->next;
		free(node);
	}

	return (1);
}
