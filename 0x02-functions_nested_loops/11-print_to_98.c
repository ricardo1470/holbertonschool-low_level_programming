#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 *@n: int type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 ; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	if (i == 98)
	{
		printf("%d\n", i);
	}
	for (i = n; i > 97 ; i--)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
}
