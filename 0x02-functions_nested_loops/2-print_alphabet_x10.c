#include "holberton.h"

/**
 * print_alphabet_x10  - Entry point
 * Desc: print_alphabet_x10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int v;
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		for (v = 'a' ; v <= 'z' ; v++)
			_putchar(v);
		_putchar('\n');
	}
}
