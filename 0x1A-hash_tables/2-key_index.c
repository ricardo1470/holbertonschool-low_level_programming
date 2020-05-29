#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: value pointer
 * @size: value
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	for (i = 0; i[key] != 0; i++)
	{
		i = hash_djb2(key) % size;
		return (i);
	}
	return (i);
}
