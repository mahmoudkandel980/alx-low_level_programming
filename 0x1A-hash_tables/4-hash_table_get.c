#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key looking for
 *
 * Return: Associated value with element, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key) {
    hash_node_t *n;
    unsigned long int i;

    if (key == NULL || ht == NULL)
    {
        return (NULL);
    }

    i = key_index((const unsigned char *)key, ht->size);
    n = ht->array[i];

    for (; n != NULL; n = n->next) {
        if (strcmp(n->key, key) == 0)
        {
            return (n->value);
        }
    }

    return (NULL);
}
