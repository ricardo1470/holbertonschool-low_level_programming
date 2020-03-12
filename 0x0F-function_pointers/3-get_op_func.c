#include "calc.h"

/**
 * get_op_func - check the code for Holberton School students.
 *@s: pointer
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != '\0')
	{
		if (ops[i].op == *s)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
