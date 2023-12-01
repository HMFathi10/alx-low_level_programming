#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	char *del;

	if (!ht)
		return;
	printf("{");
	del = "";
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", del, temp->key, temp->value);
			temp = temp->next;
			del = ", ";
		}
	}
	printf("}\n");
}
