#include "lists.h"

/**
 * sum_listint - Entry point.
 * @head:pointer value.
 * Return: Always 0 (Success)
 */
int sum_listint(listint_t *head)
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
