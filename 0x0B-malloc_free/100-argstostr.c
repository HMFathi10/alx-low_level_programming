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
	for (i = 1; i < ac; i++)
        {
                j = 0;
                while (*(av[i] + j) != '\0')
                {
			size++;
                        j++;
                }
        }
	ptr = malloc((size + 1) * sizeof(char));
	ptr[size] = '\0';
	size = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			if (*(av[i] + j + 1) == '\0')
				ptr[size] = '\n';
			else
				ptr[size] = *(av[i] + j);
			j++;
			size++;
		}
	}
	return (NULL);
}
