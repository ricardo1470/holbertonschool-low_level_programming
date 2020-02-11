#include "holberton.h"

/**
 * _isalpha  - Function that checks
 * @c: Check of data
 * Desc: print_alphabet
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
