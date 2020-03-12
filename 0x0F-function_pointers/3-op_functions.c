#include "3-calc.h"

/**
  * op_add - initializes a variable
  *
  * @a: int.
  * @b: int.
  * Return: nothing.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - initializes a variable
  *
  * @a: int.
  * @b: int.
  * Return: nothing.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - initializes a variable
  *
  * @a: int.
  * @b: int.
  * Return: nothing.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - initializes a variable
  *
  * @a: int.
  * @b: int.
  * Return: nothing.
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
  * op_mod - initializes a variable
  *
  * @a: int.
  * @b: int.
  * Return: nothing.
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
