#include "lists.h"

/**
 * print_list - funtion prints list_t list elements
 * @h: param list
 * Return: elements list number
 */

size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;
	while (h)
	{
		if (h->str == NULL)
        {
			printf("[%d] %s\n", 0, "(nil)");
        }
		else
        {
			printf("[%d] %s\n", h->len, h->str);
        }

		h = h->next;
		length++;
	}
	return (length);
}
