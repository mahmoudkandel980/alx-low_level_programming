#include "lists.h"

/**
 * sum_listint - function returns the summation
 * 
 * @head: the list head
 *
 * Return: summation of all data
 */

int sum_listint(listint_t *head)
{
	int summation = 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
