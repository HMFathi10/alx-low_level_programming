#include "lists.h"

/**
 * *insert_dnodeint_at_index - Get node from  double linked list .
 * @h: dlistint_t
 * @idx: int
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current = *h;
		if (current)
			while (current->prev)
				current = current->prev;
		while (current && idx && idx--)
		{
			current = current->next;
		}
		if (idx == 0)
		{
			if (current == NULL)
				new_node = add_dnodeint_end(h, n);
			else
			{
				new_node = malloc(sizeof(dlistint_t));
				if (new_node == NULL)
					return (NULL);
				new_node->n = n;
				new_node->prev = current->prev;
				current->prev->next = new_node;
				new_node->next = current;
				current->prev = new_node;
			}
		}
	}
	return (new_node);
}
