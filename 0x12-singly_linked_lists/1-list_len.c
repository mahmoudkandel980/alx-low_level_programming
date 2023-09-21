#include "lists.h"

/**
 * list_len - function check the code
 * @h: list name.
 * Return: node number
 */

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
