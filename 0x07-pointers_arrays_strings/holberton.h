#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);/*_putchar*/
char *_memset(char *s, char b, unsigned int n);/*prototype function that fills memory with a constant byte.*/
char *_memcpy(char *dest, char *src, unsigned int n);/*function that copies memory area.*/
char *_strchr(char *s, char c);/*function that locates a character in a string.*/
unsigned int _strspn(char *s, char *accept);/*prototype function that gets the length of a prefix substring.*/
char *_strpbrk(char *s, char *accept);/*function that searches a string for any of a set of bytes.*/
char *_strstr(char *haystack, char *needle);/*function that locates a substring.*/
void print_chessboard(char (*a)[8]);/*function that prints the chessboard.*/
void print_diagsums(int *a, int size);/*function that prints the sum of the two diagonals of a square matrix of integers.*/

#endif /* HOLBERTON_H */