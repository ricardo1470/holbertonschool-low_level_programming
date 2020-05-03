#include "lists.h"

/**
 * sum_dlistint - Entry point.
 * @head:pointer value.
 * Return: Always 0 (Success)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
