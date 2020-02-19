#include "holberton.h"

/**
 * puts_half - Entry point
 * Desc: Entry
 *@str: pointer
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i;
	int k;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	i--;
	k = i % 2;
	i = (i - k) / 2;
	for ( ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
