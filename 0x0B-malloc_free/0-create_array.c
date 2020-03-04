#include "holberton.h"
#include <stdlib.h>
/**
 * create_array -  Entry point
 *@size: unsigned int.
 *@c: char.
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(c) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
