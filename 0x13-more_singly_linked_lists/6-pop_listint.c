#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * 
 * @head: double
 *
 * Return: head
 */

int pop_listint(listint_t **head)
{
	listint_t *firstOne;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	firstOne = *head;
	*head = first->next;
	x = first->n;
	free(firstOne);
	return (x);
}
