#include "hash_tables.h"

/**
 * hash_table_set - adding value and keys
 *
 * @ht: hash table
 * @key: character
 * @value: character
 *
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
int index;
hash_node_t *node;
if (ht == NULL)
	return (0);
if (key == NULL || strlen(key) == 0)
	return (0);
if (value == NULL)
	return (0);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node != NULL)
{
if (!strcmp(node->key, key))
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
	return (0);
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = strdup(value);
if (new->value == NULL)
{
free(new->key);
free(new);
return (0);
}
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
