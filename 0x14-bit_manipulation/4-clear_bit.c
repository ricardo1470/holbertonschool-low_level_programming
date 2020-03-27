#include "holberton.h"

/**
 * clear_bit - Entry point.
 * @index:pointer value.
 * @n: int value.
 * Return: Always 0 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
