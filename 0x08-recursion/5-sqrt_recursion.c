#include "holberton.h"

int _my_sqrt(int j, int i);
/**
 *_sqrt_recursion - find the sqrt of n without using loops
 *@n: base number
 *
 *Return:  of input string
 *
 */

int _sqrt_recursion(int n)
{
	int k = 0;

	k = _my_sqrt(n, 0);
	return (k);
}

/**
 * _my_sqrt - Find the square.
 * @j: int
 * @i:int
 * Return: result of the sqare root of n
 */
int _my_sqrt(int j, int i)
{
	int k = 0;

	if (i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
	}
	k = _my_sqrt(j, (i + 1));
	return (k);
}
