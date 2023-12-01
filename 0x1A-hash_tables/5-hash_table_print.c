#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht) {
    hash_node_t *node;
    unsigned long int count = 0, j = 0;

    if (ht)
    {
        printf("{");
        for (count = 0; count < ht->size; count++) {
            node = ht->array[count];
            while (node != NULL) {
                if (j != 0)
                {
                    printf(", ");
                }
                j = 1;
                printf("'%s': '%s'", node->key, node->value);
                node = node->next;
            }
        }
        printf("}\n");
    }
}
