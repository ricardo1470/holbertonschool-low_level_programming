#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that sums 2 numbers.
 * @a: number1
 * @b: number2
 * Return: the sum of both numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtractions two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: the subtractions of both numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: the multiply of both numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: the division of both numbers.
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that find the module between two numbers.
 * @a: number 1.
 * @b: number 2.
 * Return: the module of both numbers.
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
