#include "hash_tables.h"
/**
 * hash_table_get - implementation of the djb2 algorithm
 * @ht: value pointer
 * @key: value
 * Return: hash value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}












