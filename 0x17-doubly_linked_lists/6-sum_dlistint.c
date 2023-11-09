#include "lists.h"

/**
 * *sum_dlistint - Get node from  double linked list .
 * @head: dlistint_t
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
