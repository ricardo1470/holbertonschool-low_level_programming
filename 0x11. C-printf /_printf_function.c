#include "holberton.h"
/**
 * print_single_char - Entry function
 * @c: operator
 * Return: function
 */
int print_single_char(va_list c)
{
	char var = (char) va_arg(c, int);

	_putchar(var);
	return (1);
}
/**
 * print_string_char - Entry function
 * @s: operator
 * Return: function
 */
int print_string_char(va_list s)
{
	char *string;
	int k;

	string = va_arg(s, char*);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (k = 0 ; string[k] != '\0' ; k++)
	{
		_putchar (string[k]);
	}
	return (k);
}

/**
 * print_decimal - Entry function
 * @d: operator
 * Return: function
 */
int print_decimal(va_list d)
{
	int dstring;
	int negative = 0;
	unsigned int num;

	dstring = va_arg(d, int);
	if (dstring < 0)
	{
		_putchar('-');
		negative = 1;
		num = dstring * -1;
	}
	else
	{
		num = dstring;
	}
	if (num > 9)
		return (negative + the_range(num));
	_putchar(num + '0');
	return (1 + negative);
}

/**
 * the_range - function to find n
 *@n: number of members
 * Return:0
 */
int the_range(unsigned int n)
{
	unsigned int number, charnum;
	int count = 0;

	if (n != 0)
	{
		number = (n / 10);
		charnum = (n % 10);
		count += the_range(number);
		count++;
		_putchar(charnum + '0');
		return (count);
	}
	return (0);
}
