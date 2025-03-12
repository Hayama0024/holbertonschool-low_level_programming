#include "main.h"
#include <stdlib.h>

/**
* _strlen - Calculates the length of a string manually
* @str: The string to measure
*
* Return: The length of the string
*/
unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str && str[length] != '\0')
	length++;

	return (length);
}

/**
* string_nconcat - Concatenates
* `s1` with the first `n` bytes of `s2`
* @s1: The first string
* @s2: The second string
* @n: Maximum number of bytes to copy from `s2`
*
* Return: Pointer to the newly allocated
* memory containing the concatenated string,
*         or NULL if memory allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
