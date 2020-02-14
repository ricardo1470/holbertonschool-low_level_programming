#include "holberton.h"

/**
 * print_line - Entry point
 * Desc: Entry
 *@n: inv var
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n ; c++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
