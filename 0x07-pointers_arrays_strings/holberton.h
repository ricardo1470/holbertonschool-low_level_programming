#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);/*_putchar*/
char *_memset(char *s, char b, unsigned int n);/*prototype function that fills memory with a constant byte.*/
char *_memcpy(char *dest, char *src, unsigned int n);/*prototype function that copies memory area.*/
char *_strchr(char *s, char c);/*prototype function that locates a character in a string.*/
unsigned int _strspn(char *s, char *accept);/*prototype function that gets the length of a prefix substring.*/
char *_strpbrk(char *s, char *accept);/*prototype function that searches a string for any of a set of bytes.*/
char *_strstr(char *haystack, char *needle);/*prototypefunction that locates a substring.*/
void print_chessboard(char (*a)[8]);/*prototypefunction that prints the chessboard.*/
void print_diagsums(int *a, int size);/*prototype function that prints the sum of the two diagonals of a square matrix of integers.*/
void set_string(char **s, char *to);/*prototype function that sets the value of a pointer to a char.*/

#endif /* HOLBERTON_H */