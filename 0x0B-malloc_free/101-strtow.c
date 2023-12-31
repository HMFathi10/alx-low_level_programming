#include "main.h"

/**
 * **countWords - allocate grid with 0.
 * @str: string
 * Return: int
 */
int countWords(char *str)
{
	int i = 0, words = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			words++;
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				;
		}
		else
			i++;
	}
	return (words);
}
/**
 * **strtow - allocate grid with 0.
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **ptr, *word;
	int i = 0, words = 0, j = 0, count = 0;
	int size = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = countWords(str);
	if (words == 0)
		return (NULL);
	ptr = malloc((words + 1) * sizeof(char *));
	for (size = 0, i = 0; size < words; size++)
	{
		while (str[i] != '\0')
		{
			if (str[i] != ' ')
			{
				j = 0;
				for (; str[i] != ' ' && str[i] != '\0'; i++)
				{
					j++;
				}
				word = malloc((j + 1) * sizeof(char));
				for (count = 0; count < j; count++)
				{
					word[count] = str[i - j + count];
				}
				word[count] = '\0';
				ptr[size] = word;
				break;
			}
			else
				i++;
		}
	}
	ptr[words] = NULL;
	return (ptr);
}
