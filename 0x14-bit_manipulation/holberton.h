#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int _putchar(char c);
/*prototype _putchar*/
unsigned int binary_to_uint(const char *b);
/*function that converts a binary number to an unsigned int.*/
void print_binary(unsigned long int n);
/*function that prints the binary representation of a number.*/
void bin_print(unsigned long int n);
/*prototype recursion*/
int get_bit(unsigned long int n, unsigned int index);
/*function that returns the value of a bit at a given index.*/

#endif /* HOLBERTON_H */
