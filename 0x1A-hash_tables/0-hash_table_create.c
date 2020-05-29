#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * Desc: Entry
 * @size: value
 * Return: Always 0 (Success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
}
