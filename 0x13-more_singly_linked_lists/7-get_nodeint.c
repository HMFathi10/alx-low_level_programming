#include "lists.h"

/**
 * *get_nodeint_at_index - print the list and return length.
 * @head: listint_t
 * @index: int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (temp && index + 1)
	{
		if (!index)
			return (temp);
		temp = temp->next;
		index--;
	}
	return (NULL);
}
