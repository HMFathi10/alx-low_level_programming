#include "lists.h"

/**
 * *add_nodeint - print the list and return length.
 * @head: listint_h
 * @n: int
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return(NULL);
	new->n = n;
	if (*head)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (*head);
}
