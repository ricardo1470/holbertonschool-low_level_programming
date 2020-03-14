#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Entry point
 * Desc: Entry
 *@format: value
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	char *k;
	va_list valist;
	unsigned int i, j;

	i = 0;
	while (format != NULL)
	{
		va_start(valist, format);
		while (format[i] != 0)
		{
			j = 1;
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(valist, int));
				break;
				case 'i':
				printf("%d", va_arg(valist, int));
				break;
				case 'f':
				printf("%f", va_arg(valist, double));
				break;
				case 's':
				k = va_arg(valist, char *);
				if (k == 0)
				k = "(nil)";
				printf("%s", k);
				break;
				default:
				j = 0;
				break;
			}
			if (format[i + 1] && j)
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
