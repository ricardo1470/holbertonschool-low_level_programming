#include "search_algos.h"

/**
 * binary_search - Entry point
 * Desc: Entry
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: a pointer to the newly allocated hashtable
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int i;
	size_t right = size - 1;
	size_t mid;

	if (!array)
	{
		return (-1);
	}

	while (left < (int)right)
	{
		printf("Searching in array: ");
		for (i = left ; i < (int)right; i++)
		{
			printf("%d, ", *(array + i));
		}
		printf("%d\n ", *(array + i));
		mid = ((left + right) / 2);

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
