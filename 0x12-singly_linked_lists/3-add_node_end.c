#include "lists.h"

/**
 * add_node - function adds a new node
 * 
 * @head: list head
 * @str: string store in list
 * 
 * Return: head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;
	size_t nchar = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[nchar])
		nchar++;

	newNode->len = nchar;
	newNode->next = NULL;
	currentNode = *head;

	if (currentNode == NULL)
    {
		*head = newNode;
    }
	else
	{
		while (currentNode->next != NULL)
		currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (*head);
}
