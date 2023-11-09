#include "lists.h"

/**
 * *delete_dnodeint_at_index - Get node from  double linked list .
 * @head: dlistint_t
 * @index: int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!head)
		return (-1);
	current = *head;
	if (current)
		while (current->prev)
			current = current->prev;
	while (current && index && index--)
	{
		current = current->next;
	}
	if (index == 0)
	{
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		if (*head == current)
			*head = (*head)->next;
		free(current);
		return (1);
	}
	return (-1);
}
