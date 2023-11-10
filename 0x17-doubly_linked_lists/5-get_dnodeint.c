#include "lists.h"

/**
 * get_dnodeint_at_index - Fun Locates a node in list
 * @head: The head of list
 * @index: The node
 *
 * Return: If not exist Null, otherwise adress of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int j;

	tmp = head;
	j = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	
	while (tmp)
	{
		if (j == index)
		{
			return (tmp);
		}

		tmp = tmp->next;
		j++;
	}
	return (NULL);
}
