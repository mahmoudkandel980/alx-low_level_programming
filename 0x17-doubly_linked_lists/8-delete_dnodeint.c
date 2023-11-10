#include "lists.h"

/**
 * delete_dnodeint_at_index - Fun deletes the node
 *
 * @head: head of the list
 * @index: new node index
 * Return: 1 if it succeeded, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first;
	dlistint_t *second;
	unsigned int i;

	first = *head;

	if (first)
		while (first->prev)
			first = first->prev;

	i = 0;

	while (first)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = first->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				second->next = first->next;

				if (first->next)
					first->next->prev = second;
			}

			free(first);
			return (1);
		}
		second = first;
		first = first->next;
		i++;
	}

	return (-1);
}
