#include "lists.h"

/**
 * *add_dnodeint - Add new node to double linked list .
 * @head: dlistint_t
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	current = *head;
	if (current != NULL)
		while (current->prev != NULL)
			current->prev = NULL;
	new_node->next = current;
	if (current != NULL)
		current->prev = new_node;
	*head = new_node;
	return (new_node);
}
