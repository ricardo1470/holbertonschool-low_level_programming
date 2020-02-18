#include "holberton.h"

/**
 * _puts - Entry point
 * Desc: Entry
 *@str: pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
