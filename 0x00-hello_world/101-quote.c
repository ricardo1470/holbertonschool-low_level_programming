#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	l = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);
	return (1);
}
