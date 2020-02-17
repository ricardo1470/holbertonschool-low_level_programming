#include "holberton.h"

/**
 * print_times_table - check the code for Holberton School students.
 * @n: int type
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int f;
	int c;
	int d;

	for (f = 0 ; f <= n ; f++)
	{
		for (c = 0 ; c <= n ; c++)
		{
			d= f * c;
			if (n == 15 && n <= 0)
			{
			if ( n <= 9)
			{
			
			}