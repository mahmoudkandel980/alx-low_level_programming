#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double
 *
 * Return: head
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	first = *head;
	*head = first->next;
	n = first->n;

	free(first);
	
	return (n);
}
