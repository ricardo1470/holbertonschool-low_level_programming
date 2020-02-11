#include "holberton.h"

/**
 * print_sign  - Function that checks
 * @n: Check of data
 * Desc: print_sign
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n % 10 > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n % 10 == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
