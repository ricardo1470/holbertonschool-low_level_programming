#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
  * op_add - initializes a variable
  * @a: int.
  * @b: int.
  * Return: 0.
  */
int op_add(int a, int b);/*prototype add*/

/**
  * op_sub - initializes a variable
  * @a: int.
  * @b: int.
  * Return: 0.
  */
int op_sub(int a, int b);/*prototype sub*/

/**
  * op_mul - initializes a variable
  * @a: int.
  * @b: int.
  * Return: 0.
  */
int op_mul(int a, int b);/*prototype mul*/

/**
  * op_div - initializes a variable
  * @a: int.
  * @b: int.
  * Return: 0.
  */
int op_div(int a, int b);/*prototype div*/

/**
  * op_mod - initializes a variable
  * @a: int.
  * @b: int.
  * Return: 0.
  */
int op_mod(int a, int b);/*prototype mod*/

/**
  * get_op_func - initializes a variable
  * @s: char.
  * Return: 0.
  */
int (*get_op_func(char *s))(int, int);/**/

#endif/* CALC_H */
