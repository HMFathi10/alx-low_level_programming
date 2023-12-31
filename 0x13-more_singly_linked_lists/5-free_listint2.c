#include "lists.h"

/**
 * free_listint2 - print the list and return length.
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	if (head)
	{
		ptr = *head;
		while ((temp = ptr))
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
