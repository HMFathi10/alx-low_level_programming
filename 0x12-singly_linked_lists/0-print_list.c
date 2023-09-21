#include "lists.h"

/**
 * print_list - print the list adn return length.
 * @h: list_h
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int length = 0;

	while(h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		length++;
		h = h->next;
	}
	return (length);
}
