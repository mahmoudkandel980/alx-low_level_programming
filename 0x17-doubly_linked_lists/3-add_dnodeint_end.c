#include "lists.h"

/**
 * add_dnodeint_end - Fun adds a new node at the end of lisr
 * @head: A head of list
 * @n: int
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
