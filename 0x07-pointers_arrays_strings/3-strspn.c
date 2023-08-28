#include "main.h"

/**
 * *_strspn - return bytes.
 * @s: array
 * @accept: array
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
