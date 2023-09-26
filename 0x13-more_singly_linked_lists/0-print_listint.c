#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function list of elements
 * @h: head of list
 * Return: nodes of numbers
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
