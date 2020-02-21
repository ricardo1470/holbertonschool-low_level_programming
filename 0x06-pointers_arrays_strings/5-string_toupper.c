#include "holberton.h"

/**
 * string_toupper - Entry point
 * Desc: Entry
 *@a: pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
