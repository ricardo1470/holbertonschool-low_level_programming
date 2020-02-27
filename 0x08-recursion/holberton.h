#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

int _putchar(char c);/*prototype _putchar*/
void _puts_recursion(char *s);/*prototype function that prints a string, followed by a new line.*/
void _print_rev_recursion(char *s);/*prototype function that prints a string in reverse.*/
int _strlen_recursion(char *s);/*prototype function that returns the length of a string.*/
int factorial(int n);/*prototype function that returns the factorial of a given number.*/
int _pow_recursion(int x, int y);/* function that returns the value of x raised to the power of y.*/
int _sqrt_recursion(int n);/*function that returns the natural square root of a number.*/
int _my_sqrt(int j, int i);
int is_prime_number(int n);/*function that returns 1 if the input integer is a prime number, otherwise return 0.*/
int _my_number(int k, int l);
int is_palindrome(char *s);/*function that returns 1 if a string is a palindrome and 0 if not.*/
int rev(char *s);
int rev1(char *s, int l);

#endif /* HOLBERTON_H */