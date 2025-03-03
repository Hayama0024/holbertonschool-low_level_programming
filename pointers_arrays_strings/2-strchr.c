#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be lacated
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == '\0')
	{
		return (s);
	}
	return ((void *)0);
}

