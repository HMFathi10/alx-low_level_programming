#include "main.h"

/**
 * **alloc_grid - allocate grid with 0.
 * @width: int
 * @height: int
 * Return: int
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
        }
	ptr = malloc(size * sizeof(char));
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
		if (i + 1 < ac)
			ptr[size++] = '\n';
	}
	return (ptr);
}
