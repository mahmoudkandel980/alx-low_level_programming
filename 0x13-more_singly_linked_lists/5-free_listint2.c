#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: double
 *
 * Return: void (no return)
 */

void free_listint2(listint_t **head)
{
	listint_t *becoming;

	if (head == NULL)
	{
		return;
	}
	
	while (*head != NULL)
	{
		becoming = (*head)->next;
		free(*head);
		*head = becoming;
	}
}
