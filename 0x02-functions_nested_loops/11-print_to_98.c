#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: int type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i = n;

	if (i < 98)
	{
		for (; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (i > 98 && i != 98)
	{
		for (; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%d", i);
	printf("\n");
}