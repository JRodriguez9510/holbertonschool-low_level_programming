#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table with given size
 *
 * @size: size of the hash table
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_hash;
if (!size)
return (NULL);
new_hash = malloc(sizeof(hash_table_t) * 1);
if (!new_hash)
return (NULL);
new_hash->size = size;
new_hash->array = calloc(size, sizeof(hash_table_t *));
if (!new_hash->array)
{
free(new_hash);
return (NULL);
}
return (new_hash);
}
