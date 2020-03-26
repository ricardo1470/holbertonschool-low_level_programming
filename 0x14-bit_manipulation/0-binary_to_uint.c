#include "holberton.h"

/**
 * binary_to_uint - Entry point.
 * @b:pointer value.
 * Return: Always 0 (Success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, k = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			j = j + k;
		}
		k = k * 2;
		i--;
	}
	return (j);
}
