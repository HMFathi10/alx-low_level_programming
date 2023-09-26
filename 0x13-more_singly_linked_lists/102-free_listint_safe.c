#include "lists.h"

/**
 * free_listint_safe - print the list and return length.
 * @h: listint_t
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *new, *headTptr, *tempptr;
	listint_t *delTemp;
	size_t number = 0;

	headTptr = NULL;
	while (*h)
	{
		new = malloc(sizeof(listptr_t));
		if (!new)
			exit(98);
		new->p = (void *)*h;
		new->next = headTptr;
		headTptr = new;
		tempptr = headTptr;
		while (tempptr->next)
		{
			tempptr = tempptr->next;
			if (*h == tempptr->p)
			{
				*h = NULL;
				free_temp_list(&headTptr);
				return (number);
			}
		}
		delTemp = *h;
		*h = (*h)->next;
		free(delTemp);
		number++;
	}
	*h = NULL;
	free_temp_list(&headTptr);
	return (number);
}
