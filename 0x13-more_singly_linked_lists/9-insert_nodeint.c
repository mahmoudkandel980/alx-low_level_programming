#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function
 * 
 * @head: double
 * @idx: index
 * @n: node
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currentOne, *newONe;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		currentOne = *head;
		for (i = 0; i < idx - 1 && currentOne != NULL; i++)
		{
			currentOne = current->next;
		}
		if (currentOne == NULL)
			return (NULL);
	}
	newONe = malloc(sizeof(listint_t));
	if (newONe == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = newONe;
		return (newONe);
	}

	new->next = current->next;
	current->next = newONe;
	return (newONe);
}
