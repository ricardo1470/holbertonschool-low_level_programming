#include <stdio.h>

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;
	int c = 0;

	while (b <=9)
	{
		c = b + 1;
		while (c < 10)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (b != 8 || c!= 9)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
