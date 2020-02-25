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

	for (i = 0 ; haystack[i] != '\0'; i++)
	{
		for (j = 0 ; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
			break;
		}
	}
	needle = 0;
	return (0);
}
