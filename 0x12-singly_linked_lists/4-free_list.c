#include "lists.h"

/**
 * free_list - free list function
 * @head: list head
 * Return: nothing (Void)
 */

void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
