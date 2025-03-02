#include "main.h"

/**
 * cap_string - capitalizes first letter of a word
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i] != '\0')
	{
		if (cap && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
		}
		cap = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
	i++;
	}
	return (str);
}
