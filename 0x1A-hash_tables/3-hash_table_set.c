#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Pointer to hash
 * @key: Pointer to the key
 * @value: value
 * Return: success (1), otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    unsigned long i, tableSize;
    hash_node_t *newNode;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    tableSize = ht->tableSize;
    i = key_index((const unsigned char *)key, tableSize);

    if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0) {
        ht->array[i]->value = strdup(value);
        return (1);
    }

    newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL)
        return (0);

    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = ht->array[i];
    ht->array[i] = newNode;

    return (1);
}
