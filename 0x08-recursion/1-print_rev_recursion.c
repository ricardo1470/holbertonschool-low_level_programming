#include "holberton.h"

/**
 * _print_rev_recursion - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	s--;
	_putchar(*s);
}
