#include "lists.h"

/**
 * *insert_nodeint_at_index - print the list and return length.
 * @head: listint_t
 * @idx: int
 * @n: int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int count = 0;

	temp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = temp;
		temp = new;
		return (new);
	}
	else
		while (temp && count <= idx)
		{
			if (count + 1 == idx)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
			count++;
		}
	return (NULL);
}
