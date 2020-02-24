#include "holberton.h"

/**
 * _memset - Entry point
 * Desc: Entry
 *@dest: pointer
 *@src: pointer
 *@n: number the bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i=0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
