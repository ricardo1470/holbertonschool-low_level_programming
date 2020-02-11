#include "holberton.h"

/**
 * _isalpha  - Function that checks
 * @c: Check of data
 * Desc: print_alphabet
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c > 97  && c < 122)
	{
		return (1);
	}
	else if (c > 64 && c < 91 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
