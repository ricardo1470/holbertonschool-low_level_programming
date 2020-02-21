#include "holberton.h"

/**
 * reverse_array - Entry point
 * Desc: Entry
 *@a: pointer
 *@n: var
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	for (i = 0, j = n - 1; i < n / 2 ; i++, j--)
	{
		k = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = k;
	}
}
