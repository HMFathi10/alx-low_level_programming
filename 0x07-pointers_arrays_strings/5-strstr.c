#include "main.h"

/**
 * *_strstr - Find string.
 * @heystack: string
 * @needle: string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		while (*(haystack + i) == needle[i++])
		{
			if (!needle[i])
				return (haystack);

		}
		haystack++;
	}
	return (NULL);
}
