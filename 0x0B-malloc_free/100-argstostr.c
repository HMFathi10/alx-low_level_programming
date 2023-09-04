#include "main.h"

/**
 * *argstostr - allocate grid with 0.
 * @ac: int
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int size = 0;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			size++;
			j++;
		}
		size++;
	}
	ptr = malloc((size + 1) * sizeof(char));
	ptr[size - 1] = '\0';
	size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			ptr[size] = *(av[i] + j);
			j++;
			size++;
		}
		ptr[size++] = '\n';
	}
	return (ptr);
}
