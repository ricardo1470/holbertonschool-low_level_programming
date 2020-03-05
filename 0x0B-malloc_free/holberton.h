#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);/*prototype _putchar*/
char *create_array(unsigned int size, char c);/*prototype function that creates an array of chars, and initializes it with a specific char.*/
char *_strdup(char *str);/*function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.*/
char *str_concat(char *s1, char *s2);/*prototype function that concatenates two strings*/
int **alloc_grid(int width, int height);/*prototype function that returns a pointer to a 2 dimensional array of integers.*/
void free_grid(int **grid, int height);/*prototype function that frees a 2 dimensional grid previously created by your alloc_grid function.*/

#endif /* HOLBERTON_H */