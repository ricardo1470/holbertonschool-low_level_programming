#include "holberton.h"

/**
 * _abs  - Functio that checks
 * @r: Check of data
 * Desc: _abs
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	{
		return (r);
	}
}
