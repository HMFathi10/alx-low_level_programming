#include "lists.h"

/**
 * print_listint - print the list and return length.
 * @h: listint_h
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
