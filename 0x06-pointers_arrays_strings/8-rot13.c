#include "holberton.h"

/**
 * rot13 - Entry point
 * Desc: Entry
 *@r: pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *r)
{
	int i;
	int j;
	char k[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; *(r + i) != '\0' ; i++)
	{
		for (j = 0 ; k[j] != '\0'; j++)
		{
			if (*(r + i) == k[j])
			{
				*(r + i) = n[j];
				break;
			}
		}
	}
	return (r);
}
