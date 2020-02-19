#include "holberton.h"

/**
 * _strcpy - Entry point
 * Desc: Entry
 *@dest: pointer
 *@src: pointer
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	dest[i] = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
