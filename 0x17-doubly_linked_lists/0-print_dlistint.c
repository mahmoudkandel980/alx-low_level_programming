#include "lists.h"

/**
 * print_dlistint - Fun Prints all the elements of a dlistint_t list.
 * @h: The head of list
 *
 * Return: The nodes number
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
