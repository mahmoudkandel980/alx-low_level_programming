#include "hash_tables.h"

/**
  * hash_table_create - hash table creation
  * @size: sizeof table
  *
  * Return: pointer
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTabel;

	if (!size)
		return (NULL);

	hashTabel = calloc(1, sizeof(hash_table_t));
	if (!hashTabel)
		return (NULL);
	hashTabel->size = size;
	hashTabel->array = calloc(size, sizeof(hash_node_t *));
	if (!hashTabel->array)
	{
		free(hashTabel);
		return (NULL);
	}
	return (hashTabel);
}
