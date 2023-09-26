#include "lists.h"

/**
 * reverse_listint - function reverses a linked list.
 * 
 * @head: double (head of the list)
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL){
		return (*head);
	}

	previous = NULL;
	
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	
	return (*head);
}
