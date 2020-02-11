#include "holberton.h"

/**
 * _islower  - Function that checks
 * @c: Check of data
 * Desc: print_alphabet
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
