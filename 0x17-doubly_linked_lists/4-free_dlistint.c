#include "lists.h"

/**
 * free_dnodeint -free to double linked list .
 * @head: dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		while (head->prev)
			head = head->prev;
	while(current = head)
	{
		head = head->next;
		free(current);
	}
}
