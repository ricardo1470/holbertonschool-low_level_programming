#include "holberton.h"

/**
 * print_rev - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
