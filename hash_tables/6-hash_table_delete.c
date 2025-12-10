#include "hash_tables.h"

/**
 *  hash_table_delete - deleting hash table
 *
 *  @ht: hash table
 *
 *  Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
int i;
hash_node_t *node;
hash_node_t *node2;
unsigned long int j;
if (ht == NULL)
	return;
for (j = 0 ; j < ht->size ; j++)
{
node = ht->array[j];
while (node != NULL)
{
node2 = node->next;
free(node->key);
free(node->value);
free(node);
node = node2;
}
}
free(ht->array);
free(ht);
}
