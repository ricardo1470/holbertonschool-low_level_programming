#include "holberton.h"

/**
 * print_most_numbers - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (c != '2' && c != '4')
		{
		_putchar (c);
		}
	}
	_putchar ('\n');
}
