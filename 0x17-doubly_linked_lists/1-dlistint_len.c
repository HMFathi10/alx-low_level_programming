#include "lists.h"

/**
 * dlistint_len - Get double linked list length.
 * @h: dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int count = 0;

	current = h;
	if (current == NULL)
		return (count);
	if (current->prev != NULL)
		current = current->prev;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
