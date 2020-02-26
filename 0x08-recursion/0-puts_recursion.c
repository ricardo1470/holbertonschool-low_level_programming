#include "holberton.h"

/**
 * _puts_recursion - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
