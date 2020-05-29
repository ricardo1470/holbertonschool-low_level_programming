#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * Desc: Entry
 * @size: the size of the hashtable
 * Return: a pointer to the newly allocated hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size < 1)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
