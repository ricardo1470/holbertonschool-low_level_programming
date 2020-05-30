#include "hash_tables.h"
/**
 * hash_table_print - implementation of the djb2 algorithm
 * @ht: value pointer
 * Return: hash value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, comma_position;
	hash_node_t *node;

	if (ht == NULL)
		return;
	idx = 0;
	comma_position = 0;
	putchar('{');
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (comma_position > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma_position++;
			node = node->next;
		}
		idx++;
	}
	printf("}\n");
}
