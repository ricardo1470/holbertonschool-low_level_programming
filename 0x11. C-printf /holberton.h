#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct Pf_func - format
 * _printf- print function
 * @op: pointer
 * @f: function pointer
*/
typedef struct Pf_func
{
	char *op;
	int (*f)(va_list);
} print_fun;

/**
 * _printf - Entry function
 * @format: operator
 * Return: function
 */
int _printf(const char *format, ...); /*prototype printf*/
/**
 *_putchar-printing character
 * @c:character to be printed
 * Return: 0
 */
int _putchar(char c); /*prototype putchar*/
int _strcmp(const char *s1, char *s2);
int (*get_op_func(const char *s, int pos))(va_list);

int _pow_recursion(int x, int y);
int print_single_char(va_list c);
int print_string_char(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_decimal(va_list d);
int the_range(unsigned int n);
/*prototype function that compares two strings.*/
#endif /* HOLBERTON_H */
