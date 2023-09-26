#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of list
 * 
 * @head: douuble (head of list)
 * @n: integer (n element)
 *
 * Return: if failed (NULL). else will return address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	if (head == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}
	
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
