#include "holberton.h"

/**
 * _strncat - Entry point
 * Desc: Entry
 *@dest: pointer
 *@src: pointer
 *@n: var
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' && j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
