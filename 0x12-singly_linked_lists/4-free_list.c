#include "lists.h"

/**
 * free_list - Free the linked list.
 * @head: list_h
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
