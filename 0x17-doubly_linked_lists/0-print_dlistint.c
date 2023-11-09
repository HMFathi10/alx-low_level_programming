#include "lists.h"

/**
 * print_dlistint - print double linked list.
 * @h: dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
