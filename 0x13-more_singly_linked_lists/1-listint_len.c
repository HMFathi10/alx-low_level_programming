#include "lists.h"

/**
 * listint_len - print the list and return length.
 * @h: listint_h
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
