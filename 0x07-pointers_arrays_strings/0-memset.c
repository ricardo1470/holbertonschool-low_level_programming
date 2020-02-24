#include "holberton.h"

/**
 * _memset - Entry point
 * Desc: Entry
 *@s: pointer
 *@b: string
 *@n: number the bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
