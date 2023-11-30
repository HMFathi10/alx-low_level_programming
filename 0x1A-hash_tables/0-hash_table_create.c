#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t* table;

	table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
