#include "holberton.h"

/**
 * print_triangle - Entry point
 * Desc: Entry
 *@size: int var
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int c;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0 ; l < size ; l++)
	{
		for (c = 0 ; c < size ; c++)
		{
			if(c >= size - l - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
