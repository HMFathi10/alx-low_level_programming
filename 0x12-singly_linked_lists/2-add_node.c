#include "lists.h"

/**
 * str_len - get string length
 * @str: char
 * Return: int
 */
int str_len(const char *str)
{
	int len = -1;

	while(str[++len])
		;
	return (len);
}

/**
 * *add_node - Return new node.
 * @head: list_h
 * @str: char
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	if(*head)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (*head);
}
