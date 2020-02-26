#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
