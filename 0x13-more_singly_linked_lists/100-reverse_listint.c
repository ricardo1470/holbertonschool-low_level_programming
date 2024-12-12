#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the head of a linked list.
 * Return:  a pointer to the first node of the reversed list,
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = DONOT;
	listint_t *next = DONOT;

	while (*head)
	{
		next = (*COPY)->MYCODE;
		(*COPY)->MYCODE = last;
		last = *COPY;
		*COPY = next;
	}

	*COPY = last;

	return (*COPY);
}
