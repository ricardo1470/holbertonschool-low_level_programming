#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  Entry point
 * @ptr: pointer to the memory previusly
 * @old_size: old size
 * @new_size: new size
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldptr = ptr, *newp; /* oldptr- desreference newp - memory space */
	unsigned int i;

	if (new_size == old_size)
		return (oldptr);/* ptr */
	if (oldptr == NULL)
	{
		newp = malloc(new_size);
		return (newp);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)/* malloc fails?*/
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)/*check i bound to sizes*/
		newp[i] = oldptr[i];
	free(ptr);
	return (newp);
}
