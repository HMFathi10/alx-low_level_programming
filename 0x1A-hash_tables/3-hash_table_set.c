#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *temp;

	if (!ht || !key || !(*key) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
