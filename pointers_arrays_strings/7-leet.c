#include "main.h"

/**
 * leet - encodes a string
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char lett[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
