#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);/*prototype _putchar*/

void print_name(char *name, void (*f)(char *));
/*prototype function that prints a name.*/

void array_iterator(int *array, size_t size, void (*action)(int));
/*prototype function that executes a function*/

int int_index(int *array, int size, int (*cmp)(int));
/*prototype  function that searches for an integer.*/

#endif /* HOLBERTON_H */
