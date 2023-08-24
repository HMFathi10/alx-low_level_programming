#include "main.h"

/**
 * *cap_string - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *cap_string(char *s)
{
	char *sym = ",;.!?(){}\n\t\" ";
	int st = -1;
	int j = 0;

	while (s[++st] != '\0')
	{
		if (st == 0 && (s[st] >= 'a' && s[st] <= 'z'))
		{
			s[st] = s[st] - 32;
			continue;
		}
		if ((s[st] >= 'a' && s[st] <= 'z') || (s[st] >= 'A' && s[st] <= 'Z'))
			continue;
		for (j = 0; j < 13; j++)
		{
			if (s[st] == sym[j])
			{
				if (s[st + 1] >= 'a' && s[st + 1] <= 'z')
				{
					s[st + 1] = s[st + 1] - 32;
					break;
				}
			}
		}
	}
	return (s);
}
