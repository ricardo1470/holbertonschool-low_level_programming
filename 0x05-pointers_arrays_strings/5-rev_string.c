#include "holberton.h"

/**
 * rev_string - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i;
	int j;
	char k;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	i--;
	for (j = 0 ; j < i ; j++, i--)
	{
	k = *(s + i);
	*(s + i) = *(s + j);
	*(s + j) = k;
	}
}
