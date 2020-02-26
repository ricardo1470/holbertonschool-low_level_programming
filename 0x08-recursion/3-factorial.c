#include "holberton.h"

/**
 * factorial - Entry point
 * Desc: Entry
 *@n: int value
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
