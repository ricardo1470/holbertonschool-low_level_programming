#include "3-calc.h"

/**
  * op_add - add of two numbers.
  * @a: first number.
  * @b: second number.
  * Return: add.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction of two numbers.
  * @a: first number.
  * @b: second number.
  * Return: subtraction.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication of two numbers.
  * @a: first number.
  * @b: second number.
  * Return: multiplication.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide of two numbers.
  * @a: first number.
  * @b: second number.
  * Return: divide.
  */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(98);
}

/**
  * op_mod - module of two numbers.
  * @a: first number.
  * @b: second number.
  * Return: module.
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
