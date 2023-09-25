#include "lists.h"

/**
 * *add_nodeint_end - print the list and return length.
 * @head: listint_h
 * @n: int
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return(NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (!temp)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;

	}
	return (*head);
}
