#include "holberton.h"

/**
 * _strspn - Entry point
 * Desc: Entry
 *@s: pointer
 *@accept: pointer
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (count);
}
