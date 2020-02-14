#include "holberton.h"

/**
 * print_diagonal - Entry point
 * Desc: Entry
 *@n: inv var
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
