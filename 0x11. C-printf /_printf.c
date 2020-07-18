#include "holberton.h"
/**
 * _printf - Entry point
 * Desc: Entry
 *@format: pointer
 * Return: On success.
 */
int _printf(const char *format, ...)
{
	va_list mylist;
	unsigned int i = 0, j = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(mylist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{	_putchar('%');
				j++;
				i++;
			}
			else if (get_op_func(format, i + 1) != NULL)
			{	j += (get_op_func(format, i + 1))(mylist);
				i++;
			}
			else
			{	_putchar(format[i]);
				j++;
			}
		}
		else
		{	_putchar(format[i]);
			j++;
		}
	}
	va_end(mylist);
	return (j);
}
/**
 * get_op_func - Entry function
 * @s: operator
 * @pos: position
 * Return: function
 */
int (*get_op_func(const char *s, int pos))(va_list)
{
	print_fun ops[] = {
		{"c", print_single_char},
		{"s", print_string_char},
		{"d", print_decimal},
		{"i", print_decimal},
		{NULL, NULL}};
	int k;

	for (k = 0; ops[k].op != NULL; k++)
	{
		if (ops[k].op[0] == s[pos])
		{
			return (ops[k].f);
		}
	}
	return (NULL);
}
