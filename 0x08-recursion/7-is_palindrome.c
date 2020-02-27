#include "holberton.h"

/**
 * is_palindrome - Entry point
 * @s: int value
 * Return: Return .
 */
int is_palindrome(char *s)
{
	int a;

	a = rev(s);
	if (a <= 1)
	{
		return (1);
	}
	return (rev1(s, a));
}
/**
 * rev- Entry point
 * @s: int value
 * Return: return.
 */
int rev(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + rev(s + 1));
}
/**
 * rev1 - Entry point
 * @s: int value
 * @l: int value
 * Return: check.
 */
int rev1(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
	return (rev1(s + 1, l - 2));
	}
}
