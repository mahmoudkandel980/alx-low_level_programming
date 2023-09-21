#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - function to singly linked list
 * @str: is a string
 * @len: string length
 * @next: refers for the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);

#endif
