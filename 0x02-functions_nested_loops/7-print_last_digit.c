#include "holberton.h"

/**
 * print_last_digit  - Functio that checks
 * @a: Check of data
 * Desc: _abs
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
