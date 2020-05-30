#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: anything
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del, *temp;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{

		temp = ht->array[i];
		while (temp != NULL)
		{
			del = temp;
			temp = temp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
