#include "holberton.h"

/**
 * _str - Entry point
 * Desc: Entry
 *@dest: pointer
 *@src: pointer
 *@n: var
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
