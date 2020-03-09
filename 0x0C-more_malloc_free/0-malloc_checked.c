#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  Entry point
 *@b: unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
