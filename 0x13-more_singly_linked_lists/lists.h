#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
/*prototype _putchar*/
size_t print_listint(const listint_t *h);
/*prototype function that prints all the elements of a listint_t list.*/
size_t listint_len(const listint_t *h);
/*prototype function that returns the number of elements in a linked listint_t list.*/

#endif /* LISTS_H */
