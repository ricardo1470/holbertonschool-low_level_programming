#include "holberton.h"

/**
 * print_binary - Entry point.
 * @n:pointer value.
 * Return: Always 0 (Success)
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bin_print(n);
}
/**
 * bin_print - prints the binary in reverse
 * @n: base 10 number
 */
void bin_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		bin_print(n >> 1);
	}
	_putchar((n & 1) + '0');
}
