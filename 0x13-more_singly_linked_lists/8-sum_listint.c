#include "lists.h"

/**
 * sum_listint - print the list and return length.
 * @head: listint_t
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
