#include "lists.h"

/**
 * insert_dnodeint_at_index - Fun inserts a newNode at a given position
 * @h: pointer to the list
 * @idx: newNode index
 * @n: newNode
 * Return: NULL if fail otherwise address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *head;
	unsigned int i;

	newNode = NULL;
	if (idx == 0)
		newNode = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode)
					{
						newNode->n = n;
						newNode->next = head->next;
						newNode->prev = head;
						head->next->prev = newNode;
						head->next = newNode;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (newNode);
}
