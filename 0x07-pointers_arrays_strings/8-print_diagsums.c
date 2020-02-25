#include "holberton.h"

/**
 * print_diagsums - Entry point
 * Desc: Entry
 *@a: pointer
 *@size: value
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int dg_r = 0;
	int dg_l = 0;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = (i * size) + j;
			if (i == j)
			{
				dg_r = dg_r + a[k];
			}
			if ((i + j) == (size - 1))
			{
				dg_l = dg_l + a[k];
			}
		}
	}
	printf("%d, %d\n", dg_r, dg_l);
}
