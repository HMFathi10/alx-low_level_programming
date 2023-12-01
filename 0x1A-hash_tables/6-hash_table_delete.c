#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *col;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while((col = temp) != NULL)
		{
			temp = temp->next;
			free(col->key);
			free(col->value);
			free(col);
		}
	}
	free(ht->array);
	free(ht);
}
