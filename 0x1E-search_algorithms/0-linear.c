#include "search_algos.h"

/**
 * linear_searche - Entry point
 * Desc: Entry
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: a pointer to the newly allocated hashtable
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size ; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
