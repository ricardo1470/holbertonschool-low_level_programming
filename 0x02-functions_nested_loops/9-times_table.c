#include "holberton.h"

/**
 * times_table  - Function that checks
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int f;
	int c;
	int d;

	for (f = 0 ; f <= 9 ; f++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			d = f * c;
			if (c != 0)
			{
				if (d <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
				else if (d > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(d / 10 + '0');
					_putchar(d % 10 + '0');
				}
			}
			else
			{
				_putchar(d + '0');
			}
		}
		_putchar('\n');
	}
}
