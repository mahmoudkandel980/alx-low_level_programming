#include "lists.h"

/**
 * sum_dlistint - Fun summation of all the data in list
 * @head: The head of list
 *
 * Return: The summation of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}

	return (summation);
}

