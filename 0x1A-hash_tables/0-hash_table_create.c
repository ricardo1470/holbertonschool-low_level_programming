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
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (!(table->array))
	{	
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
