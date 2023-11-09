#include "lists.h"

/**
 * *get_dnodeint_at_index - Get node from  double linked list .
 * @head: dlistint_t
 * @index: int
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (head && index--)
	{
		head = head->next;
	}
	return (head);
}
