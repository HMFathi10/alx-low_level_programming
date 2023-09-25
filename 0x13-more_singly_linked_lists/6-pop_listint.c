#include "lists.h"

/**
 * pop_listint - print the list and return length.
 * @head: listint_t
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (!temp)
		return (0);
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
