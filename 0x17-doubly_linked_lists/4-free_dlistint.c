#include "lists.h"

/**
 * free_dlistint - Fun Frees a linked list.
 * @head: The head list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
