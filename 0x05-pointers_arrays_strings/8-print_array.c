#include "holberton.h"

/**
 * print_array - Entry point
 * Desc: Entry
 *@a: pointer
 *@n: var
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
