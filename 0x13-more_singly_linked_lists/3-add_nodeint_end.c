#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the end of list
 * 
 * @head: douuble (head of list)
 * @n: integer (n element)
 *
 * Return: if failed (NULL). else will return address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN;
	listint_t *currN;

	if (head == NULL)
	{
		return (NULL);
	}
	newN = malloc(sizeof(listint_t));
	if (newN == NULL){
		return (NULL);
	}

	newN->n = n;
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}

	currN = *head;

	while (currN->next != NULL)
	{
		currN = currN->next;
	}
	
	currN->next = newN;
	return (newN);
}
