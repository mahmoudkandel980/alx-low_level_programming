#include "lists.h"

/**
 * dlistint_len - Fun Counts the number of elements in list.
 * @h: The list head
 *
 * Return: The elements number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
