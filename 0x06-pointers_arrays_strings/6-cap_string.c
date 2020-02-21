#include "holberton.h"

/**
 * cap_string - Entry point
 * Desc: Entry
 *@a: pointer
 * Return: Always 0 (Success)
 */
char *cap_string(char *a)
{
	int i;
	int j;
	char k[] = " \t\n,;.!\?\"(){}";

	for (i = 0 ; a[i] != '\0'; i++)
	{
		for (j = 0 ; k[j] != '\0'; j++)
		{
			if (a[i] == k[j])
			{
				if (a[i + 1] > 96 && a[i + 1] < 123)
				{
					a[i + 1] = a[i + 1] - 32;
				}
				else if (i == 0)
				{
					if (a[i] > 96 && a[i + 1] < 123)
					{
						a[i] = a[i] - 32;
					}
				}
			}
		}
	}
	return (a);
}
