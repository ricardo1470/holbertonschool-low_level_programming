#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c); /*_putchar*/
char *_strcat(char *dest, char *src);/*prototype function that concatenates two strings*/
char *_strncat(char *dest, char *src, int n);/*prototype function that concatenates two strings.*/
char *_strncpy(char *dest, char *src, int n);/*prototype function that copies a string.*/
int _strcmp(char *s1, char *s2);/*prototype function that compares two strings.*/
void reverse_array(int *a, int n);/*prototype  function that reverses the content of an array of integers.*/
char *string_toupper(char *);/*prototype function that changes all lowercase letters of a string to uppercase.*/

#endif /* HOLBERTON_H */