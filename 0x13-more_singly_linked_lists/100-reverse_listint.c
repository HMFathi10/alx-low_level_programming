#include "lists.h"

/**
 * delete_nodeint_at_index - print the list and return length.
 * @head: listint_t
 * @index: int
 * Return: int
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	next = NULL;
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
