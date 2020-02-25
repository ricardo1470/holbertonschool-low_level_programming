#include "holberton.h"

/**
 * _strchr - Entry point
 * Desc: Entry
 *@s: pointer
 *@c: string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'  ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (s);
}
