#include "lists.h"

/**
 * get_nodeint_at_index - function returns node
 * @head: list head
 * @index: node index
 *
 * Return: If node does not exist returns NULL. else node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}

	return (head);
}
