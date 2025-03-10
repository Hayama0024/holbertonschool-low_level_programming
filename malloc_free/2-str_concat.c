#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - Concatenates two strings and stores the result in new memory
* @s1: First string
* @s2: Second string
*
* Return: Pointer to the newly allocated space containing concatenated string,
*         or NULL if memory allocation fails.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0, total_len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

total_len = len1 + len2;
concat = malloc(sizeof(char) * (total_len + 1));

if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++, i++)
concat[i] = s2[j];

concat[i] = '\0';
return (concat);
}
