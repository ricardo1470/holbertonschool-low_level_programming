#include "lists.h"

/**
 * free_listint - Entry point.
 * @head:value.
 * Return: Always 0 (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
