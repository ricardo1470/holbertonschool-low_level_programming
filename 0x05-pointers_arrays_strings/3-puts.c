#include "holberton.h"

/**
 * _puts - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}

