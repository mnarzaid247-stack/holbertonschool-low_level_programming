#include "hash_tables.h"

/**
 * hash_table_print - printing the hash table
 *
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
int j = 0;
int i = 1;
hash_node_t *node;
if (ht == NULL)
	return;
printf("{");
for (; j < ht->size ; j++)
{
node = ht->array[j];
while (node != NULL)
{
if (i == 0)
{
printf(", '%s': '%s'", node->key, node->value);
node = node->next;
}
else
{
printf("'%s': '%s'", node->key, node->value);
i = 0;
node = node->next;
}
}
}
printf("}\n");
}
