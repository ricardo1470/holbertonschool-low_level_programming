#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

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
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
/*prototype function that frees a listint_t list.*/
void free_listint2(listint_t **head);
/*prototype function that frees a listint_t list.*/
int pop_listint(listint_t **head);
/*prototype function that deletes the head node of a listint_t linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*prototype function that returns the nth node of a listint_t linked list.*/
int sum_listint(listint_t *head);
/*prototype function that returns the sum of all the data (n) of a listint_t.*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*prototype function that inserts a new node at a given position.*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/*prototy pefunction that deletes the node at index index of a listint_t.*/

#endif /* LISTS_H */
