#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%d\n", hash_table_set(ht, "hetairas", "mentioner"));
    printf("%d\n", hash_table_set(ht, "heliotropes", "neurospora"));
    printf("%d\n",hash_table_set(ht, "depravement", "serafins"));
    printf("%d\n",hash_table_set(ht, "stylist", "subgenera"));
    printf("%d\n",hash_table_set(ht, "joyful", "synaphea"));
    printf("%d\n",hash_table_set(ht, "redescribed", "urites"));
    printf("%d\n",hash_table_set(ht, "dram", "vivency"));
    return (EXIT_SUCCESS);
}
