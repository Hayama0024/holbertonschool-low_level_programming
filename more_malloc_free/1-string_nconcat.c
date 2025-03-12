#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates the first `n` bytes of `s2` to `s1`
* @s1: The first string
* @s2: The string to be concatenated
* @n: The maximum number of bytes to copy from `s2`
*
* Return: A pointer to the newly allocated space in memory containing
*         the concatenated string, or NULL if memory allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_string = malloc(len1 + n + 1);
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < n; j++)
		new_string[i + j]  = s2[j];

	new_string[i + j] = '\0';


	return (new_string);
}
