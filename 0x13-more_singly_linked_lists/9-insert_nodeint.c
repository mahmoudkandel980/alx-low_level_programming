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
	unsigned int x;
	listint_t *current, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		current = *head;
		for (x = 0; x < idx - 1 && current != NULL; x++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
