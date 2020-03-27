#include "holberton.h"

/**
 * get_bit - Entry point.
 * @index:pointer value.
 * @n: int value.
 * Return: Always 0 (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);
}

