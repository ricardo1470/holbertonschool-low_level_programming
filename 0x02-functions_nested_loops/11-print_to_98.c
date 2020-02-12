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

if (n < 98)
{
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
		printf("%d ", n);
	}
	for (i = 0; i > 97 ; i--)
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
	printf("\n");
}
else
	printf("%d ", n);
}
