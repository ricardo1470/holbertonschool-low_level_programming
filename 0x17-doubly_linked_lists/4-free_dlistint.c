#include "lists.h"
/**
 * free_list - Entry point
 * @head: pointer
 * Return: Always 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	if (head->next)
	{
		free_dlistint(head->next);
	}
	free(head);
}
