#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 *@n: int type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (n = n ; n < 99 ; n++)
	{
		if (n != 99)
		{
			printf("%d ", n);
		}
	}
	for (n = n ; n > 99 ; n--)
	{
		if (n != 99)
		{
			printf("%d ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
