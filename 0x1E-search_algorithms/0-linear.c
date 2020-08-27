#include "search_algos.h"

/**
 * linear_search - Entry point
 * Desc: Entry
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: a pointer to the newly allocated hashtable
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (array)
	{
		for (i = 0; i < (int)size ; i++)
		{
			printf("Value checked array [%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return ((int)i);
			}
		}
	}
	return (-1);
}
