#include <stdio.h>

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b =  0;

	while (b < 10)
	{
		putchar(b + '0');
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
