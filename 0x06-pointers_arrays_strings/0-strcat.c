#include "holberton.h"

/**
 * _strcat - Entry point
 * Desc: Entry
 *@dest: pointer
 *@src: pointer
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
