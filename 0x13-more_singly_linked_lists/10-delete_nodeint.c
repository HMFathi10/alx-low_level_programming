#include "lists.h"

/**
 * delete_nodeint_at_index - print the list and return length.
 * @head: listint_t
 * @index: int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i;

	temp = *head;
	if (!temp)
		return (-1);
	if (index == 0)
	{
		ptr = temp->next;
		*head = ptr;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp; i++)
	{
		if (i == index - 1 && temp->next != NULL)
		{
			ptr = temp->next;
			temp->next = ptr->next;
			free(ptr);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
