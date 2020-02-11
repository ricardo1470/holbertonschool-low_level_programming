#include "holberton.h"

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	char h[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
