#include "lists.h"

/**
 * *reverse_listint - print the list and return length.
 * @head: listint_t
 * Return: listint_t
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
