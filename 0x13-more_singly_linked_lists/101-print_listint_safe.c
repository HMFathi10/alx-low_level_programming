#include "lists.h"

/**
 * free_temp_list - free list
 * @head: listptr_t
 * Return: void
 */
void free_temp_list(listptr_t **head)
{
	listptr_t *temp, *del;

	if (head)
	{
		temp = *head;
		while ((del = temp))
		{
			temp = temp->next;
			free(del);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - print the list and return length.
 * @head: listint_t
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	listptr_t *new, *headTptr, *tempptr;
	size_t number = 0;

	headTptr = NULL;
	while (head)
	{
		new = malloc(sizeof(listptr_t));
		if (!new)
			exit(98);
		new->p = (void *)head;
		new->next = headTptr;
		headTptr = new;
		tempptr = headTptr;
		while (tempptr->next)
		{
			tempptr = tempptr->next;
			if (head == tempptr->p)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				free_temp_list(&headTptr);
				return (number);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		number++;
	}
	free_temp_list(&headTptr);
	return (number);
}
