#include "hash_tables.h"

/**
 * key_index - return the index of the key
 *
 * @key: character
 * @size: integer
 *
 * Return: integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int real_key = hash_djb2(key);
if (size == 0)
       return (0);	
real_key = real_key % size;
return (real_key);
}
