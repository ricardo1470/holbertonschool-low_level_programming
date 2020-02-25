#include "holberton.h"

/**
 * _strstr - Entry point
 * Desc: Entry
 *@haystack: pointer
 *@needle: pointer
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0 ; haystack[i] ; i++)
	{
		for (j = 0 ; needle[j] ; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	haystack = 0;
	return (haystack);
}
