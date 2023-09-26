#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function
 * 
 * @head: is a pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *becomming;

	while (head)
	{
		becomming = head->next;
		free(head);
		head = becomming;
	}
}
