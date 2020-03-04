#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat -  Entry point
 *@s1: char
 *@s2: char
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0 ; s2[j] != '\0' ; j++)
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(sizeof(char) * (i + j) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(p + k) = *(s1 + k);
	}
	for (l = 0; l < j; l++)
	{
		*(p + (i + l)) = *(s2 + l);
	}
	return (p);
}
