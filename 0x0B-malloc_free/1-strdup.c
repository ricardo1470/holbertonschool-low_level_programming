#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  Entry point
 *@str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}
	for (j = 0 ; str[j] != '\0' ; j++)
	{
	}
	p = malloc(sizeof(char) * (j + 1));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';
	return (p);
}
