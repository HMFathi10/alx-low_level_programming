#include "lists.h"

/**
 * *sum_dnodeint - Get node from  double linked list .
 * @head: dlistint_t
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (!head)
		return (count);
	while (head->prev)
		head = head->prev;
	while (head && ++count)
	{
		head = head->next;
	}
	return (count);
}
