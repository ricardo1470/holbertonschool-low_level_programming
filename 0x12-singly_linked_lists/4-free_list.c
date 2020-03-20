#include "lists.h"
/**
 * free_list - Entry point
 * @head: pointer
 * Return: Always 0 (Success)
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}

	free(head->str);
	free(head);
}
