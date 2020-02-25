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
	int i;
	
	for (i = 0; s[i] != '\0' ; s++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
