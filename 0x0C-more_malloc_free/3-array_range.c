#include "holberton.h"
#include <stdlib.h>

/**
 * array_range -  Entry point
 *@min: int
 *@max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	j = ((max - min) + 1);
	p = malloc((sizeof(int)) * j);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < j ; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
