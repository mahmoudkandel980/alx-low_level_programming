#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function
 * 
 * @head: double
 * @index: index
 *
 * Return: pointer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
