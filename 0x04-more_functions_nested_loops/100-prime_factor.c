#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prime factor of the number
 * Return: 0
 */

int main(void)
{
	long i;
	long j;

	i = 612852475143;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
		}
	}
	printf("%ld\n", i);
	return (0);
}
