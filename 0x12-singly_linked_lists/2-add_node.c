#include "lists.h"

/**
 * add_node - function adds a new node
 * 
 * @head: list head
 * @str: string store in list
 * 
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newAdd;
	size_t x = 0;

	newAdd = malloc(sizeof(list_t));
	if (newAdd == NULL)
    {
		return (NULL);
    }

	while (str[x])
    {
		x++;
    }

	newAdd->str = strdup(str);
	newAdd->len = x;
	newAdd->next = *head;
	*head = newAdd;

	return (*head);
}
