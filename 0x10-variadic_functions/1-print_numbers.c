#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * Desc: Entry
 *@n: int value
 *@separator: char
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != 0 && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
