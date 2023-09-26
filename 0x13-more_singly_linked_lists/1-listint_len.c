#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * 
 * @h: is a pointer
 *
 * Return:  returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
