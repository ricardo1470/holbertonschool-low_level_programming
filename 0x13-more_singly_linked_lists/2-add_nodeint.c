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
	/* 1. allocate node */
	if (node == NULL)
	{
		return (NULL);
	}
	node->n  = n;
	/* 2. put in the data  */
	node->next = *head;
	/* 3. Make next of new node as head */
	*head = node;
	/* 4. move the head to point to the new node */
	return (*head);
	/* 5. return head */
}
