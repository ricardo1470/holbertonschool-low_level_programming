#include "holberton.h"

/**
 * _strpbrk - Entry point
 * Desc: Entry
 *@s: pointer
 *@accept: pointer
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	s = 0;
	return (0);
}
