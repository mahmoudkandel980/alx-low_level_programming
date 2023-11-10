#include "lists.h"

/**
 * insert_dnodeint_at_index - Fun inserts a new node at a given position
 * @h: pointer to the list
 * @idx: new node index
 * @n: new node
 * Return: NULL if fail otherwise address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h;
	dlistint_t *new;
	dlistint_t *tmp;
	*tmp = *h

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
