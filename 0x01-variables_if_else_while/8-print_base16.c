include <stdio.h>

/**
 * main - Entry point
 * Desc: Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	char c;

	b = '0';
	c = 'a';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
