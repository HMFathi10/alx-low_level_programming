#include "lists.h"

/**
 * list_len - Return length.
 * @h: list_h
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int length = 0;

	while(h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
