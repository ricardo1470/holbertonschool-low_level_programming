#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);/*prototype _putchar*/
char *create_array(unsigned int size, char c);/*prototype function that creates an array of chars, and initializes it with a specific char.*/
char *_strdup(char *str);/*function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.*/
char *str_concat(char *s1, char *s2);/*prototype function that concatenates two strings*/
int **alloc_grid(int width, int height);/*prototype function that returns a pointer to a 2 dimensional array of integers.*/

#endif /* HOLBERTON_H */