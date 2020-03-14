#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>

int _putchar(char c);
/*prototype putchar*/
int sum_them_all(const unsigned int n, ...);
/*prototype function that returns the sum of all its parameters. */
void print_numbers(const char *separator, const unsigned int n, ...);
/*prototype  function that prints numbers, followed by a new line.*/
void print_strings(const char *separator, const unsigned int n, ...);
/*prototype function that prints strings, followed by a new line.*/
void print_all(const char * const format, ...);
/*prototype function that prints anything.*/

#endif /* VARIADIC_H */
