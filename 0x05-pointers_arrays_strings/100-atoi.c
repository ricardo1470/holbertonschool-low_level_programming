#include "holberton.h"

/**
 * _atoi - Entry point
 * Desc: Entry
 *@s: pointer
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int nev = 1;
	int i;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			nev *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (num * nev);
}
