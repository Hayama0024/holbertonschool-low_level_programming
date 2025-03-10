#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Copies a string to a newly allocated memory space
 * @str: The original string to be duplicated
 *
 * Return: A pointer to the newly allocated duplicate string,
 *         or NULL if memory allocation fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
    unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
