#include "holberton.h"

/**
 * _isupper - Entry point
 * Desc: Entry
 *@c: int var
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
