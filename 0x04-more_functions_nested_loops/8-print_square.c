#include "holberton.h"

/**
 * print_square - Entry point
 * Desc: Entry
 *@size: inv var
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
