#include "holberton.h"

/**
 * is_prime_number - Entry point
 * @n: Check if prime
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_my_number(n, 2));
}

/**
 * _my_number - Entry point
 * @k: int value
 * @l: int value
 * Return: 1 if prime; 0 if not prime.
 */

int _my_number(int k, int l)
{
	if (l <= (k - 1))
	{
		if (k % l == 0)
		{
			return (0);
		}
		return (_my_number(k, l + 1));
	}
	return (1);
}
