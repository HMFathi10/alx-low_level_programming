#include "lists.h"

/**
 * free_dlistint - free to double linked list .
 * @head: dlistint_t
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (head && index--)
	{
		head = head->next;
	}
	return (head);
}
