#include "main.h"
/**
 * _strstr -locates a substring
 * @haystack: string to be modified
 * @needle: string to search
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] != '\0')
			i++;

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}
	return ((void *)0);
}
